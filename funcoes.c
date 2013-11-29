@@ -0,0 +1,49 @@
+//
+//  funcoes.c
+//  tim beta
+//
+//  Created by Dominique Fonseca on 18/11/13.
+//  Copyright (c) 2013 Dominique Fonseca. All rights reserved.
+//
+#include <stdio.h>
+
+
+
+
+int _mes, _ano;
+
+int dias_mes(int _mes, int _ano) {
+    int bissexto, dias;
+    
+    bissexto = _ano % 4;
+    if (_mes == 2 && bissexto == 0) {
+        dias = 29;
+    } else {
+        if (_mes == 2 && bissexto != 0) {
+            dias = 28;
+        } else {  switch (_mes) {
+            case 1:
+            case 3:
+            case 5:
+            case 7:
+            case 8:
+            case 10:
+            case 12: dias = 31;
+                break;
+            default: dias = 30;
+        }
+        }
+    }
+    return dias;
+}
+
+float beta(float sms, float internet, float voz) {
+    int dias = dias_mes(_mes,_ano);
+    float custo_diario = (sms + internet + voz);
+    float custo_mes = (custo_diario * dias);
+    
+    return(custo_mes);
+}
+
+
+
