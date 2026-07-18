FUN_0074a27c:
0074A27C  56                        PUSH ESI
0074A27D  8B F1                     MOV ESI,ECX
0074A27F  57                        PUSH EDI
0074A280  8B 7E 68                  MOV EDI,dword ptr [ESI + 0x68]
0074A283  85 FF                     TEST EDI,EDI
0074A285  74 11                     JZ 0x0074a298
0074A287  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0074A28A  57                        PUSH EDI
0074A28B  50                        PUSH EAX
0074A28C  8B 08                     MOV ECX,dword ptr [EAX]
0074A28E  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074A291  8B CE                     MOV ECX,ESI
0074A293  E8 DF FF FF FF            CALL 0x0074a277
LAB_0074a298:
0074A298  FF 76 54                  PUSH dword ptr [ESI + 0x54]
0074A29B  FF 15 98 BC 85 00         CALL dword ptr [0x0085bc98]
0074A2A1  33 C0                     XOR EAX,EAX
0074A2A3  85 FF                     TEST EDI,EDI
0074A2A5  5F                        POP EDI
0074A2A6  5E                        POP ESI
0074A2A7  0F 94 C0                  SETZ AL
0074A2AA  C3                        RET
