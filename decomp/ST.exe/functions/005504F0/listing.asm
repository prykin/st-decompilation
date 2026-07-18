FUN_005504f0:
005504F0  55                        PUSH EBP
005504F1  8B EC                     MOV EBP,ESP
005504F3  81 EC 08 01 00 00         SUB ESP,0x108
005504F9  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005504FE  53                        PUSH EBX
005504FF  33 DB                     XOR EBX,EBX
00550501  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00550504  84 C0                     TEST AL,AL
00550506  76 70                     JBE 0x00550578
00550508  56                        PUSH ESI
00550509  57                        PUSH EDI
0055050A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055050D  BE F6 8A 80 00            MOV ESI,0x808af6
LAB_00550512:
00550512  8B 46 FA                  MOV EAX,dword ptr [ESI + -0x6]
00550515  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00550518  3B C1                     CMP EAX,ECX
0055051A  75 48                     JNZ 0x00550564
0055051C  80 3E 00                  CMP byte ptr [ESI],0x0
0055051F  74 43                     JZ 0x00550564
00550521  85 FF                     TEST EDI,EDI
00550523  74 3F                     JZ 0x00550564
00550525  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0055052B  51                        PUSH ECX
0055052C  57                        PUSH EDI
0055052D  E8 0E FC 15 00            CALL 0x006b0140
00550532  8D 56 BA                  LEA EDX,[ESI + -0x46]
00550535  50                        PUSH EAX
00550536  52                        PUSH EDX
00550537  8D 85 F8 FE FF FF         LEA EAX,[EBP + 0xfffffef8]
0055053D  68 1C 41 7C 00            PUSH 0x7c411c
00550542  50                        PUSH EAX
00550543  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00550549  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
0055054F  83 C4 10                  ADD ESP,0x10
00550552  85 C9                     TEST ECX,ECX
00550554  74 0E                     JZ 0x00550564
00550556  8D 95 F8 FE FF FF         LEA EDX,[EBP + 0xfffffef8]
0055055C  6A 08                     PUSH 0x8
0055055E  52                        PUSH EDX
0055055F  E8 74 0F EB FF            CALL 0x004014d8
LAB_00550564:
00550564  33 C0                     XOR EAX,EAX
00550566  43                        INC EBX
00550567  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0055056C  81 C6 9C 00 00 00         ADD ESI,0x9c
00550572  3B D8                     CMP EBX,EAX
00550574  72 9C                     JC 0x00550512
00550576  5F                        POP EDI
00550577  5E                        POP ESI
LAB_00550578:
00550578  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055057B  5B                        POP EBX
0055057C  85 C0                     TEST EAX,EAX
0055057E  74 0C                     JZ 0x0055058c
00550580  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00550583  51                        PUSH ECX
00550584  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00550587  E8 E4 0D EB FF            CALL 0x00401370
LAB_0055058c:
0055058C  8B E5                     MOV ESP,EBP
0055058E  5D                        POP EBP
0055058F  C2 0C 00                  RET 0xc
