(ns ex)

(defn retex [] (assert false))

(defn shex [] (babashka.process/shell "nonsense"))

(defn shret1 [] (babashka.process/shell "./ret1"))
