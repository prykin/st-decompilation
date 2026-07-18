FUN_00742f10:
00742F10  55                        PUSH EBP
00742F11  8B EC                     MOV EBP,ESP
00742F13  83 EC 08                  SUB ESP,0x8
00742F16  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00742F1A  75 07                     JNZ 0x00742f23
00742F1C  33 C0                     XOR EAX,EAX
00742F1E  E9 87 00 00 00            JMP 0x00742faa
LAB_00742f23:
00742F23  83 3D 10 72 85 00 00      CMP dword ptr [0x00857210],0x0
00742F2A  75 2D                     JNZ 0x00742f59
00742F2C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00742F2F  25 FF FF 00 00            AND EAX,0xffff
00742F34  3D FF 00 00 00            CMP EAX,0xff
00742F39  7E 0F                     JLE 0x00742f4a
00742F3B  C7 05 48 71 85 00 2A 00 00 00  MOV dword ptr [0x00857148],0x2a
00742F45  83 C8 FF                  OR EAX,0xffffffff
00742F48  EB 60                     JMP 0x00742faa
LAB_00742f4a:
00742F4A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00742F4D  8A 55 0C                  MOV DL,byte ptr [EBP + 0xc]
00742F50  88 11                     MOV byte ptr [ECX],DL
00742F52  B8 01 00 00 00            MOV EAX,0x1
00742F57  EB 51                     JMP 0x00742faa
LAB_00742f59:
00742F59  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00742F60  8D 45 F8                  LEA EAX,[EBP + -0x8]
00742F63  50                        PUSH EAX
00742F64  6A 00                     PUSH 0x0
00742F66  8B 0D 8C 14 7F 00         MOV ECX,dword ptr [0x007f148c]
00742F6C  51                        PUSH ECX
00742F6D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00742F70  52                        PUSH EDX
00742F71  6A 01                     PUSH 0x1
00742F73  8D 45 0C                  LEA EAX,[EBP + 0xc]
00742F76  50                        PUSH EAX
00742F77  68 20 02 00 00            PUSH 0x220
00742F7C  8B 0D 20 72 85 00         MOV ECX,dword ptr [0x00857220]
00742F82  51                        PUSH ECX
00742F83  FF 15 28 BC 85 00         CALL dword ptr [0x0085bc28]
00742F89  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00742F8C  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00742F90  74 06                     JZ 0x00742f98
00742F92  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
00742F96  74 0F                     JZ 0x00742fa7
LAB_00742f98:
00742F98  C7 05 48 71 85 00 2A 00 00 00  MOV dword ptr [0x00857148],0x2a
00742FA2  83 C8 FF                  OR EAX,0xffffffff
00742FA5  EB 03                     JMP 0x00742faa
LAB_00742fa7:
00742FA7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00742faa:
00742FAA  8B E5                     MOV ESP,EBP
00742FAC  5D                        POP EBP
00742FAD  C3                        RET
