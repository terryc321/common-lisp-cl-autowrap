
# README

## loading 
```
(ql:quickload :brut)
;; 
;; sdl3.lisp -- this will pull in sdl3 headers and shared libraries 
;; we should wrap all errors as just continuable errors so we can get access to 
;; +sdl-video+ +sdl-events+ 
;;  should be fine as long as we have 

```


## compiling 

need c2ffi on system to generate spec files 
once we have spec files apparently you dont need c2ffi any more


*** this wont work if spec directory does not exist at toplevel
sdl3
 |- spec/         this is where the `json` spec files will be generated
 |-               this is the source code for the cl-autowrap test
 |- README.txt    this file

place this directory into quicklisp local projects directory
~/quicklisp/local-projects/sdl3

start emacs
M-x slime
(ql:quickload :brut)

(brut.test::fred)

should see output generated

b0 = 1, b1 = 6
#<FOO-T {#X5FADA073DE20}>
1
42
0.0
2
5
22

this is doing some c foreign function call stuff

----------------------------------------------------

** cache asdf

if we delete spec directory contents , may need to open .asd file and add a space and
in slime
(ql:quickload :brut)
will force a recomputation , and hence regeneration of the spec files




----------------------------------------------------------

common lisp clang based foreign function interface code generator

using cl-autowrap which uses c2ffi (which has to be built separately)
to generate foreign function interface code

google cl-autowrap


