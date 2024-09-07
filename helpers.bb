(ns helpers)

(defn ret1 []
 (babashka.process/shell "g++" "ret1.c" "-o" "ret1")
 (babashka.process/shell "./ret1"))              

(defn raise []
 (assert false))
