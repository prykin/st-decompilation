FUN_0046d400:
0046D400  55                        PUSH EBP
0046D401  8B EC                     MOV EBP,ESP
0046D403  56                        PUSH ESI
0046D404  8B F1                     MOV ESI,ECX
0046D406  83 BE 28 05 00 00 04      CMP dword ptr [ESI + 0x528],0x4
0046D40D  75 19                     JNZ 0x0046d428
0046D40F  E8 C3 78 F9 FF            CALL 0x00404cd7
0046D414  85 C0                     TEST EAX,EAX
0046D416  75 10                     JNZ 0x0046d428
0046D418  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0046D41B  8B CE                     MOV ECX,ESI
0046D41D  50                        PUSH EAX
0046D41E  E8 CD 69 F9 FF            CALL 0x00403df0
0046D423  5E                        POP ESI
0046D424  5D                        POP EBP
0046D425  C2 04 00                  RET 0x4
LAB_0046d428:
0046D428  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0046D42B  51                        PUSH ECX
0046D42C  8B CE                     MOV ECX,ESI
0046D42E  E8 9E 3D F9 FF            CALL 0x004011d1
0046D433  5E                        POP ESI
0046D434  5D                        POP EBP
0046D435  C2 04 00                  RET 0x4
