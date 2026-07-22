CreateSTManBasis:
005F1320  6A 48                     PUSH 0x48
005F1322  E8 A9 F1 0B 00            CALL 0x006b04d0
005F1327  85 C0                     TEST EAX,EAX
005F1329  74 0D                     JZ 0x005f1338
005F132B  8B C8                     MOV ECX,EAX
005F132D  E8 B0 47 E1 FF            CALL 0x00405ae2
005F1332  A3 84 17 81 00            MOV [0x00811784],EAX
005F1337  C3                        RET
LAB_005f1338:
005F1338  33 C0                     XOR EAX,EAX
005F133A  A3 84 17 81 00            MOV [0x00811784],EAX
005F133F  C3                        RET
