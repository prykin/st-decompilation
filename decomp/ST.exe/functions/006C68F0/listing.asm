FUN_006c68f0:
006C68F0  55                        PUSH EBP
006C68F1  8B EC                     MOV EBP,ESP
006C68F3  6A FF                     PUSH -0x1
006C68F5  68 F8 D9 79 00            PUSH 0x79d9f8
006C68FA  68 64 D9 72 00            PUSH 0x72d964
006C68FF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C6905  50                        PUSH EAX
006C6906  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C690D  83 EC 1C                  SUB ESP,0x1c
006C6910  53                        PUSH EBX
006C6911  56                        PUSH ESI
006C6912  57                        PUSH EDI
006C6913  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C6916  33 FF                     XOR EDI,EDI
006C6918  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C691B  85 C0                     TEST EAX,EAX
006C691D  0F 8E 1D 01 00 00         JLE 0x006c6a40
006C6923  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006C6926  85 DB                     TEST EBX,EBX
006C6928  0F 8E 12 01 00 00         JLE 0x006c6a40
006C692E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C6931  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C6934  25 00 11 00 00            AND EAX,0x1100
006C6939  3D 00 01 00 00            CMP EAX,0x100
006C693E  0F 84 FC 00 00 00         JZ 0x006c6a40
006C6944  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C694B  74 0D                     JZ 0x006c695a
006C694D  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006C6953  51                        PUSH ECX
006C6954  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c695a:
006C695A  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006C695D  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
006C6960  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006C6963  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006C6966  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006C6969  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C696C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C696F  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006C6972  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006C6975  8D 96 84 04 00 00         LEA EDX,[ESI + 0x484]
006C697B  52                        PUSH EDX
006C697C  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006C697F  50                        PUSH EAX
006C6980  8D 4D D4                  LEA ECX,[EBP + -0x2c]
006C6983  51                        PUSH ECX
006C6984  E8 27 95 00 00            CALL 0x006cfeb0
006C6989  83 C4 0C                  ADD ESP,0xc
006C698C  85 C0                     TEST EAX,EAX
006C698E  74 6E                     JZ 0x006c69fe
006C6990  56                        PUSH ESI
006C6991  E8 1A 4F FF FF            CALL 0x006bb8b0
006C6996  8B F8                     MOV EDI,EAX
006C6998  85 FF                     TEST EDI,EDI
006C699A  75 50                     JNZ 0x006c69ec
006C699C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C699F  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006C69A5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C69A8  52                        PUSH EDX
006C69A9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C69AC  51                        PUSH ECX
006C69AD  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006C69B0  52                        PUSH EDX
006C69B1  50                        PUSH EAX
006C69B2  0F AF 45 D8               IMUL EAX,dword ptr [EBP + -0x28]
006C69B6  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006C69BC  03 45 D4                  ADD EAX,dword ptr [EBP + -0x2c]
006C69BF  50                        PUSH EAX
006C69C0  E8 DB 12 01 00            CALL 0x006d7ca0
006C69C5  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C69CC  EB 18                     JMP 0x006c69e6
LAB_006c69e6:
006C69E6  56                        PUSH ESI
006C69E7  E8 94 4F FF FF            CALL 0x006bb980
LAB_006c69ec:
006C69EC  81 FF A0 00 76 88         CMP EDI,0x887600a0
006C69F2  74 08                     JZ 0x006c69fc
006C69F4  81 FF AE 01 76 88         CMP EDI,0x887601ae
006C69FA  75 02                     JNZ 0x006c69fe
LAB_006c69fc:
006C69FC  33 FF                     XOR EDI,EDI
LAB_006c69fe:
006C69FE  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C6A05  74 0D                     JZ 0x006c6a14
006C6A07  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C6A0D  56                        PUSH ESI
006C6A0E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c6a14:
006C6A14  85 FF                     TEST EDI,EDI
006C6A16  74 28                     JZ 0x006c6a40
006C6A18  6A 29                     PUSH 0x29
006C6A1A  68 A4 DF 7E 00            PUSH 0x7edfa4
006C6A1F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C6A24  50                        PUSH EAX
006C6A25  57                        PUSH EDI
006C6A26  E8 15 F4 FD FF            CALL 0x006a5e40
006C6A2B  8B C7                     MOV EAX,EDI
006C6A2D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C6A30  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C6A37  5F                        POP EDI
006C6A38  5E                        POP ESI
006C6A39  5B                        POP EBX
006C6A3A  8B E5                     MOV ESP,EBP
006C6A3C  5D                        POP EBP
006C6A3D  C2 18 00                  RET 0x18
LAB_006c6a40:
006C6A40  33 C0                     XOR EAX,EAX
006C6A42  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C6A45  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C6A4C  5F                        POP EDI
006C6A4D  5E                        POP ESI
006C6A4E  5B                        POP EBX
006C6A4F  8B E5                     MOV ESP,EBP
006C6A51  5D                        POP EBP
006C6A52  C2 18 00                  RET 0x18
