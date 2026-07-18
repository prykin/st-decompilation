FUN_0063d410:
0063D410  8B 81 36 03 00 00         MOV EAX,dword ptr [ECX + 0x336]
0063D416  56                        PUSH ESI
0063D417  85 C0                     TEST EAX,EAX
0063D419  57                        PUSH EDI
0063D41A  74 2D                     JZ 0x0063d449
0063D41C  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0063D41F  33 F6                     XOR ESI,ESI
0063D421  85 FF                     TEST EDI,EDI
0063D423  7E 24                     JLE 0x0063d449
LAB_0063d425:
0063D425  8B 91 36 03 00 00         MOV EDX,dword ptr [ECX + 0x336]
0063D42B  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
0063D42E  73 14                     JNC 0x0063d444
0063D430  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0063D433  0F AF C6                  IMUL EAX,ESI
0063D436  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0063D439  85 C0                     TEST EAX,EAX
0063D43B  74 07                     JZ 0x0063d444
0063D43D  C7 40 38 FF FF FF FF      MOV dword ptr [EAX + 0x38],0xffffffff
LAB_0063d444:
0063D444  46                        INC ESI
0063D445  3B F7                     CMP ESI,EDI
0063D447  7C DC                     JL 0x0063d425
LAB_0063d449:
0063D449  5F                        POP EDI
0063D44A  5E                        POP ESI
0063D44B  C3                        RET
