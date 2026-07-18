FUN_00759530:
00759530  55                        PUSH EBP
00759531  8B EC                     MOV EBP,ESP
00759533  83 EC 08                  SUB ESP,0x8
00759536  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00759539  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075953C  53                        PUSH EBX
0075953D  56                        PUSH ESI
0075953E  57                        PUSH EDI
0075953F  8B 38                     MOV EDI,dword ptr [EAX]
00759541  C1 E1 08                  SHL ECX,0x8
00759544  B8 F4 C9 9A 3B            MOV EAX,0x3b9ac9f4
00759549  33 D2                     XOR EDX,EDX
0075954B  F7 F1                     DIV ECX
0075954D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00759550  8B F0                     MOV ESI,EAX
00759552  85 F6                     TEST ESI,ESI
00759554  7F 18                     JG 0x0075956e
00759556  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075955C  68 C5 01 00 00            PUSH 0x1c5
00759561  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759566  51                        PUSH ECX
00759567  6A 45                     PUSH 0x45
00759569  E8 D2 C8 F4 FF            CALL 0x006a5e40
LAB_0075956e:
0075956E  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
00759571  3B F3                     CMP ESI,EBX
00759573  7C 02                     JL 0x00759577
00759575  8B F3                     MOV ESI,EBX
LAB_00759577:
00759577  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075957A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075957D  8D 14 9D 00 00 00 00      LEA EDX,[EBX*0x4 + 0x0]
00759584  89 77 4C                  MOV dword ptr [EDI + 0x4c],ESI
00759587  52                        PUSH EDX
00759588  50                        PUSH EAX
00759589  51                        PUSH ECX
0075958A  E8 01 FD FF FF            CALL 0x00759290
0075958F  33 FF                     XOR EDI,EDI
00759591  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00759594  85 DB                     TEST EBX,EBX
00759596  76 46                     JBE 0x007595de
LAB_00759598:
00759598  8B C3                     MOV EAX,EBX
0075959A  2B C7                     SUB EAX,EDI
0075959C  3B F0                     CMP ESI,EAX
0075959E  72 02                     JC 0x007595a2
007595A0  8B F0                     MOV ESI,EAX
LAB_007595a2:
007595A2  8B D6                     MOV EDX,ESI
007595A4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007595A7  0F AF 55 10               IMUL EDX,dword ptr [EBP + 0x10]
007595AB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007595AE  C1 E2 08                  SHL EDX,0x8
007595B1  52                        PUSH EDX
007595B2  50                        PUSH EAX
007595B3  51                        PUSH ECX
007595B4  E8 27 FE FF FF            CALL 0x007593e0
007595B9  85 F6                     TEST ESI,ESI
007595BB  76 1A                     JBE 0x007595d7
007595BD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007595C0  8D 0C BA                  LEA ECX,[EDX + EDI*0x4]
007595C3  8B D6                     MOV EDX,ESI
007595C5  03 FE                     ADD EDI,ESI
LAB_007595c7:
007595C7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007595CA  89 01                     MOV dword ptr [ECX],EAX
007595CC  83 C1 04                  ADD ECX,0x4
007595CF  03 C3                     ADD EAX,EBX
007595D1  4A                        DEC EDX
007595D2  75 F3                     JNZ 0x007595c7
007595D4  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
LAB_007595d7:
007595D7  3B FB                     CMP EDI,EBX
007595D9  72 BD                     JC 0x00759598
007595DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_007595de:
007595DE  5F                        POP EDI
007595DF  5E                        POP ESI
007595E0  5B                        POP EBX
007595E1  8B E5                     MOV ESP,EBP
007595E3  5D                        POP EBP
007595E4  C2 10 00                  RET 0x10
