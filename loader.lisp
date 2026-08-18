
;; just continue if we hit any errors !?!
(handler-bind ((error #'(lambda (c) 
                          (if (find-restart 'continue c) 
                              (invoke-restart 'continue) 
                              (invoke-debugger c))))
               ;; Or more simply, if you want to force continue on any error with a continue restart:
               (error #'continue)) 
  (ql:quickload :brut))


