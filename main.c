@@ -1,18 +1,65 @@
-//
-//  main.c
-//  tim beta
-//
-//  Created by Dominique Fonseca on 14/11/13.
-//  Copyright (c) 2013 Dominique Fonseca. All rights reserved.
-//
-
 #include <stdio.h>
+#include "tim_beta.h"
+//#include "funcoes.c"
+
+
 
-int main(int argc, const char * argv[])
-{
+int _mes, _ano;
 
-    // insert code here...
-    printf("Hello, World!\n");
-    return 0;
+int main() {
+    
+    char barra;
+    float sms, internet, voz;
+    
+    printf("Digite o mês e o ano no formato mm/aaaa: ");
+    scanf("%d %c %d", &_mes, &barra, &_ano);
+
+    printf("Valor SMS: ");
+    scanf("%f", &sms);
+    printf("Valor internet: ");
+    scanf("%f", &internet);
+    printf("Valor Voz: ");
+    scanf("%f", &voz);
+    
+    printf("Valor mensal: %.2f\n", beta(sms, internet, voz));
+    
+    
 }
 
+
+// Funções do programa
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
