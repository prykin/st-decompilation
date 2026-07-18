FUN_005f4a30:
005F4A30  55                        PUSH EBP
005F4A31  8B EC                     MOV EBP,ESP
005F4A33  83 EC 54                  SUB ESP,0x54
005F4A36  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F4A39  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005F4A3F  53                        PUSH EBX
005F4A40  56                        PUSH ESI
005F4A41  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005F4A44  57                        PUSH EDI
005F4A45  8D 45 B0                  LEA EAX,[EBP + -0x50]
005F4A48  8D 55 AC                  LEA EDX,[EBP + -0x54]
005F4A4B  6A 00                     PUSH 0x0
005F4A4D  50                        PUSH EAX
005F4A4E  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005F4A55  C7 45 F4 F8 E5 7C 00      MOV dword ptr [EBP + -0xc],0x7ce5f8
005F4A5C  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
005F4A5F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F4A65  E8 86 8D 13 00            CALL 0x0072d7f0
005F4A6A  83 C4 08                  ADD ESP,0x8
005F4A6D  85 C0                     TEST EAX,EAX
005F4A6F  0F 85 47 01 00 00         JNZ 0x005f4bbc
005F4A75  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005F4A78  85 F6                     TEST ESI,ESI
005F4A7A  0F 84 27 01 00 00         JZ 0x005f4ba7
005F4A80  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005F4A83  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F4A86  81 E3 FF 00 00 00         AND EBX,0xff
005F4A8C  50                        PUSH EAX
005F4A8D  50                        PUSH EAX
005F4A8E  6A 01                     PUSH 0x1
005F4A90  8B 14 99                  MOV EDX,dword ptr [ECX + EBX*0x4]
005F4A93  50                        PUSH EAX
005F4A94  A1 64 67 80 00            MOV EAX,[0x00806764]
005F4A99  6A FF                     PUSH -0x1
005F4A9B  52                        PUSH EDX
005F4A9C  6A 1D                     PUSH 0x1d
005F4A9E  50                        PUSH EAX
005F4A9F  E8 4C 50 11 00            CALL 0x00709af0
005F4AA4  8B C8                     MOV ECX,EAX
005F4AA6  8B 04 DD B4 E5 7C 00      MOV EAX,dword ptr [EBX*0x8 + 0x7ce5b4]
005F4AAD  99                        CDQ
005F4AAE  2B C2                     SUB EAX,EDX
005F4AB0  83 C4 20                  ADD ESP,0x20
005F4AB3  D1 F8                     SAR EAX,0x1
005F4AB5  83 E8 0E                  SUB EAX,0xe
005F4AB8  6A 00                     PUSH 0x0
005F4ABA  50                        PUSH EAX
005F4ABB  8B 04 DD B0 E5 7C 00      MOV EAX,dword ptr [EBX*0x8 + 0x7ce5b0]
005F4AC2  99                        CDQ
005F4AC3  2B C2                     SUB EAX,EDX
005F4AC5  8B 51 0D                  MOV EDX,dword ptr [ECX + 0xd]
005F4AC8  D1 F8                     SAR EAX,0x1
005F4ACA  50                        PUSH EAX
005F4ACB  8B 41 09                  MOV EAX,dword ptr [ECX + 0x9]
005F4ACE  52                        PUSH EDX
005F4ACF  50                        PUSH EAX
005F4AD0  8D 7E 1F                  LEA EDI,[ESI + 0x1f]
005F4AD3  6A 00                     PUSH 0x0
005F4AD5  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005F4AD8  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4ADE  6A 01                     PUSH 0x1
005F4AE0  57                        PUSH EDI
005F4AE1  E8 7A 3B 0F 00            CALL 0x006e8660
005F4AE6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F4AE9  6A 01                     PUSH 0x1
005F4AEB  8B 48 21                  MOV ECX,dword ptr [EAX + 0x21]
005F4AEE  8B 10                     MOV EDX,dword ptr [EAX]
005F4AF0  8B 07                     MOV EAX,dword ptr [EDI]
005F4AF2  51                        PUSH ECX
005F4AF3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4AF9  52                        PUSH EDX
005F4AFA  6A 00                     PUSH 0x0
005F4AFC  50                        PUSH EAX
005F4AFD  E8 DE 4D 0F 00            CALL 0x006e98e0
005F4B02  8B 4E 0E                  MOV ECX,dword ptr [ESI + 0xe]
005F4B05  8B 17                     MOV EDX,dword ptr [EDI]
005F4B07  51                        PUSH ECX
005F4B08  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4B0E  6A 00                     PUSH 0x0
005F4B10  52                        PUSH EDX
005F4B11  E8 5A 57 0F 00            CALL 0x006ea270
005F4B16  DB 46 0A                  FILD dword ptr [ESI + 0xa]
005F4B19  51                        PUSH ECX
005F4B1A  8B 07                     MOV EAX,dword ptr [EDI]
005F4B1C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F4B22  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F4B28  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F4B2E  D9 1C 24                  FSTP float ptr [ESP]
005F4B31  DB 46 06                  FILD dword ptr [ESI + 0x6]
005F4B34  51                        PUSH ECX
005F4B35  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F4B3B  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F4B41  D9 1C 24                  FSTP float ptr [ESP]
005F4B44  DB 46 02                  FILD dword ptr [ESI + 0x2]
005F4B47  51                        PUSH ECX
005F4B48  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F4B4E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F4B54  D9 1C 24                  FSTP float ptr [ESP]
005F4B57  50                        PUSH EAX
005F4B58  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4B5E  E8 FD 5D 0F 00            CALL 0x006ea960
005F4B63  8B 0F                     MOV ECX,dword ptr [EDI]
005F4B65  6A 00                     PUSH 0x0
005F4B67  51                        PUSH ECX
005F4B68  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4B6E  E8 2D 5F 0F 00            CALL 0x006eaaa0
005F4B73  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005F4B76  C6 46 1E 01               MOV byte ptr [ESI + 0x1e],0x1
005F4B7A  85 C0                     TEST EAX,EAX
005F4B7C  74 12                     JZ 0x005f4b90
005F4B7E  8B 17                     MOV EDX,dword ptr [EDI]
005F4B80  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4B86  52                        PUSH EDX
005F4B87  E8 D4 5F 0F 00            CALL 0x006eab60
005F4B8C  C6 46 1E 00               MOV byte ptr [ESI + 0x1e],0x0
LAB_005f4b90:
005F4B90  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005F4B93  B8 01 00 00 00            MOV EAX,0x1
005F4B98  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F4B9E  5F                        POP EDI
005F4B9F  5E                        POP ESI
005F4BA0  5B                        POP EBX
005F4BA1  8B E5                     MOV ESP,EBP
005F4BA3  5D                        POP EBP
005F4BA4  C2 0C 00                  RET 0xc
LAB_005f4ba7:
005F4BA7  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005F4BAA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F4BAD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F4BB3  5F                        POP EDI
005F4BB4  5E                        POP ESI
005F4BB5  5B                        POP EBX
005F4BB6  8B E5                     MOV ESP,EBP
005F4BB8  5D                        POP EBP
005F4BB9  C2 0C 00                  RET 0xc
LAB_005f4bbc:
005F4BBC  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005F4BBF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F4BC2  5F                        POP EDI
005F4BC3  5E                        POP ESI
005F4BC4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F4BCA  5B                        POP EBX
005F4BCB  8B E5                     MOV ESP,EBP
005F4BCD  5D                        POP EBP
005F4BCE  C2 0C 00                  RET 0xc
