#ifndef __THREADER
#define __THREADER

#include <pthread.h>
#include <jni.h>
#include <unistd.h>
#include <cstdlib>

/* redefine some types */
#define ThreadDispatcher pthread_t 
#define Mutex pthread_mutex_t 
#define MutexAttr pthread_mutexattr_t
#define Class jclass 
#define Method jmethodID 
#define Object jobject
#define Integer jint
#define String const char* 

/* define aliases */
#define dispatchThread pthread_create
#define mutexInit pthread_mutex_init
#define setMutexAttrType pthread_mutexattr_settype
#define lockMutex pthread_mutex_lock
#define checkIfLocked pthread_mutex_timedlock
#define unlockMutex pthread_mutex_unlock
#define destroyMutex pthread_mutex_destroy
#define exitCurrentThread pthread_exit

/* define available Platforms */
#define Linux_x64 0xFF
#define Android_x86_x64 0x00
/* define default platform */
#define Platform Linux_x64

static int isInitialized = -1;
/* 1000 micro-sec = 1 ms */
static constexpr int RECYCLE_TIME = 1000;

namespace POSIX {
    static int coolDown(int time) {
        return usleep(time);
    }
    static void forceCoolDown(int time) {
        int remainingTime = coolDown(time);
        while(remainingTime == time);
    } 
    struct Threader {
        public:
           struct DispatcherArgs {
                public:
                    Mutex* mutex;
                    MutexAttr* mutexAttr;
                    String classPath;
                    jobject params;
                    JavaVM* javaVM;
                    JavaVMAttachArgs* jvmArgs;
                    int threadType = (int) ASYNC;
                    char* INTERFACING_METHOD;
                    char* INTERFACING_METHOD_SIG;
                    char* INTERFACE_CONSTRUCTOR_SIG;
                    Object javaDispatcherInstance;
                    POSIX::Threader* threader;
                    u_int32_t delay = 0;
            };
            constexpr static int ASYNC = 123;
            constexpr static int MUTEX = 456;
            void dispatch();
        public:
            Threader(DispatcherArgs*);
            void destroy();
        private:
            DispatcherArgs* args;
            ThreadDispatcher* dispatcher;
              
            friend void lock(Mutex*);
            friend void unlock(Mutex*);
            
            friend void attachDisptacher(POSIX::Threader::DispatcherArgs*);
            friend void detachDispatcher(JavaVM& vm);
            friend void* methodDispatcher(void*);
    };
}

#endif