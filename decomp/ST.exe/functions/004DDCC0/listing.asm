FUN_004ddcc0:
004DDCC0  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DDCC6  8D 91 D0 04 00 00         LEA EDX,[ECX + 0x4d0]
004DDCCC  56                        PUSH ESI
004DDCCD  33 F6                     XOR ESI,ESI
004DDCCF  85 C0                     TEST EAX,EAX
004DDCD1  7C 36                     JL 0x004ddd09
004DDCD3  53                        PUSH EBX
004DDCD4  57                        PUSH EDI
LAB_004ddcd5:
004DDCD5  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004DDCD8  85 C0                     TEST EAX,EAX
004DDCDA  74 21                     JZ 0x004ddcfd
004DDCDC  8B 02                     MOV EAX,dword ptr [EDX]
004DDCDE  8B 5A 04                  MOV EBX,dword ptr [EDX + 0x4]
004DDCE1  2D 96 00 00 00            SUB EAX,0x96
004DDCE6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004DDCE9  C1 E0 02                  SHL EAX,0x2
004DDCEC  8B B8 28 60 7E 00         MOV EDI,dword ptr [EAX + 0x7e6028]
004DDCF2  2B FB                     SUB EDI,EBX
004DDCF4  0F AF B8 24 60 7E 00      IMUL EDI,dword ptr [EAX + 0x7e6024]
004DDCFB  03 F7                     ADD ESI,EDI
LAB_004ddcfd:
004DDCFD  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
004DDD00  83 C2 14                  ADD EDX,0x14
004DDD03  85 C0                     TEST EAX,EAX
004DDD05  7D CE                     JGE 0x004ddcd5
004DDD07  5F                        POP EDI
004DDD08  5B                        POP EBX
LAB_004ddd09:
004DDD09  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004DDD0C  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
004DDD0F  6A 00                     PUSH 0x0
004DDD11  6A 00                     PUSH 0x0
004DDD13  56                        PUSH ESI
004DDD14  6A 00                     PUSH 0x0
004DDD16  50                        PUSH EAX
004DDD17  6A 03                     PUSH 0x3
004DDD19  51                        PUSH ECX
004DDD1A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDD20  E8 56 6C F2 FF            CALL 0x0040497b
004DDD25  33 C0                     XOR EAX,EAX
004DDD27  5E                        POP ESI
004DDD28  C3                        RET
