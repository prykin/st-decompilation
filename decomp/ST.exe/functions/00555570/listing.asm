FUN_00555570:
00555570  55                        PUSH EBP
00555571  8B EC                     MOV EBP,ESP
00555573  83 EC 1C                  SUB ESP,0x1c
00555576  8B 41 48                  MOV EAX,dword ptr [ECX + 0x48]
00555579  56                        PUSH ESI
0055557A  85 C0                     TEST EAX,EAX
0055557C  74 4F                     JZ 0x005555cd
0055557E  A1 48 67 80 00            MOV EAX,[0x00806748]
00555583  8B 35 FC BD 85 00         MOV ESI,dword ptr [0x0085bdfc]
00555589  6A 01                     PUSH 0x1
0055558B  6A 00                     PUSH 0x0
0055558D  6A 00                     PUSH 0x0
0055558F  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00555592  50                        PUSH EAX
00555593  51                        PUSH ECX
00555594  FF D6                     CALL ESI
00555596  85 C0                     TEST EAX,EAX
00555598  74 33                     JZ 0x005555cd
0055559A  53                        PUSH EBX
0055559B  8B 1D F8 BD 85 00         MOV EBX,dword ptr [0x0085bdf8]
005555A1  57                        PUSH EDI
005555A2  8B 3D F4 BD 85 00         MOV EDI,dword ptr [0x0085bdf4]
LAB_005555a8:
005555A8  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005555AB  52                        PUSH EDX
005555AC  FF D7                     CALL EDI
005555AE  8D 45 E4                  LEA EAX,[EBP + -0x1c]
005555B1  50                        PUSH EAX
005555B2  FF D3                     CALL EBX
005555B4  8B 0D 48 67 80 00         MOV ECX,dword ptr [0x00806748]
005555BA  6A 01                     PUSH 0x1
005555BC  6A 00                     PUSH 0x0
005555BE  6A 00                     PUSH 0x0
005555C0  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005555C3  51                        PUSH ECX
005555C4  52                        PUSH EDX
005555C5  FF D6                     CALL ESI
005555C7  85 C0                     TEST EAX,EAX
005555C9  75 DD                     JNZ 0x005555a8
005555CB  5F                        POP EDI
005555CC  5B                        POP EBX
LAB_005555cd:
005555CD  5E                        POP ESI
005555CE  8B E5                     MOV ESP,EBP
005555D0  5D                        POP EBP
005555D1  C3                        RET
