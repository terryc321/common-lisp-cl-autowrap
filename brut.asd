

;; because asdf is not a "regular" common lisp function ,
;; C-c C-c compiles this into asdf system
(asdf:defsystem :brut
  :description "wwwA simple example project"
  :version "1.0"
  :author "TheAuthor"
  :depends-on (:cl-autowrap :uiop)
  :components ((:static-file "brut.h")
	       (:file "brut")
	       ;; (:file "sdl2") ;; sdl2
	       (:file "sdl3") ;; sdl3
               ;; (:file "tools" :depends-on ("packages"))
               ;; (:file "functions" :depends-on ("packages"))
               ;; (:file "main" :depends-on ("packages" "functions"))
	       ))

