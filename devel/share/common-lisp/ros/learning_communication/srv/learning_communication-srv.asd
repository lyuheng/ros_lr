
(cl:in-package :asdf)

(defsystem "learning_communication-srv"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "AddTwoints" :depends-on ("_package_AddTwoints"))
    (:file "_package_AddTwoints" :depends-on ("_package"))
  ))