FUN_0074ee3e:
0074EE3E  55                        PUSH EBP
0074EE3F  8B EC                     MOV EBP,ESP
0074EE41  D9 EE                     FLDZ
0074EE43  56                        PUSH ESI
0074EE44  DC 5D 0C                  FCOMP double ptr [EBP + 0xc]
0074EE47  DF E0                     FNSTSW AX
0074EE49  9E                        SAHF
0074EE4A  75 07                     JNZ 0x0074ee53
0074EE4C  B8 57 00 07 80            MOV EAX,0x80070057
0074EE51  EB 31                     JMP 0x0074ee84
LAB_0074ee53:
0074EE53  8D 45 08                  LEA EAX,[EBP + 0x8]
0074EE56  50                        PUSH EAX
0074EE57  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE5A  8D 48 FC                  LEA ECX,[EAX + -0x4]
0074EE5D  E8 2C FA FF FF            CALL 0x0074e88e
0074EE62  85 C0                     TEST EAX,EAX
0074EE64  7C 1E                     JL 0x0074ee84
0074EE66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE69  DD 45 0C                  FLD double ptr [EBP + 0xc]
0074EE6C  8B 08                     MOV ECX,dword ptr [EAX]
0074EE6E  51                        PUSH ECX
0074EE6F  51                        PUSH ECX
0074EE70  DD 1C 24                  FSTP double ptr [ESP]
0074EE73  50                        PUSH EAX
0074EE74  FF 51 38                  CALL dword ptr [ECX + 0x38]
0074EE77  8B F0                     MOV ESI,EAX
0074EE79  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EE7C  50                        PUSH EAX
0074EE7D  8B 08                     MOV ECX,dword ptr [EAX]
0074EE7F  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074EE82  8B C6                     MOV EAX,ESI
LAB_0074ee84:
0074EE84  5E                        POP ESI
0074EE85  5D                        POP EBP
0074EE86  C2 0C 00                  RET 0xc
