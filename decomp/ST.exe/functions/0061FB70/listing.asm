FUN_0061fb70:
0061FB70  55                        PUSH EBP
0061FB71  8B EC                     MOV EBP,ESP
0061FB73  83 EC 14                  SUB ESP,0x14
0061FB76  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061FB79  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0061FB7C  56                        PUSH ESI
0061FB7D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061FB80  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0061FB83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061FB86  8B F1                     MOV ESI,ECX
0061FB88  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061FB8B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061FB8E  57                        PUSH EDI
0061FB8F  8B 86 B9 00 00 00         MOV EAX,dword ptr [ESI + 0xb9]
0061FB95  83 CF FF                  OR EDI,0xffffffff
0061FB98  85 C0                     TEST EAX,EAX
0061FB9A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0061FB9D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0061FBA0  75 13                     JNZ 0x0061fbb5
0061FBA2  6A 0A                     PUSH 0xa
0061FBA4  6A 14                     PUSH 0x14
0061FBA6  6A 0A                     PUSH 0xa
0061FBA8  6A 00                     PUSH 0x0
0061FBAA  E8 E1 E6 08 00            CALL 0x006ae290
0061FBAF  89 86 B9 00 00 00         MOV dword ptr [ESI + 0xb9],EAX
LAB_0061fbb5:
0061FBB5  8B B6 B9 00 00 00         MOV ESI,dword ptr [ESI + 0xb9]
0061FBBB  85 F6                     TEST ESI,ESI
0061FBBD  74 12                     JZ 0x0061fbd1
0061FBBF  8D 45 EC                  LEA EAX,[EBP + -0x14]
0061FBC2  50                        PUSH EAX
0061FBC3  56                        PUSH ESI
0061FBC4  E8 F7 E5 08 00            CALL 0x006ae1c0
0061FBC9  5F                        POP EDI
0061FBCA  5E                        POP ESI
0061FBCB  8B E5                     MOV ESP,EBP
0061FBCD  5D                        POP EBP
0061FBCE  C2 10 00                  RET 0x10
LAB_0061fbd1:
0061FBD1  8B C7                     MOV EAX,EDI
0061FBD3  5F                        POP EDI
0061FBD4  5E                        POP ESI
0061FBD5  8B E5                     MOV ESP,EBP
0061FBD7  5D                        POP EBP
0061FBD8  C2 10 00                  RET 0x10
