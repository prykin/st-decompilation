FUN_00619a20:
00619A20  55                        PUSH EBP
00619A21  8B EC                     MOV EBP,ESP
00619A23  83 EC 08                  SUB ESP,0x8
00619A26  53                        PUSH EBX
00619A27  56                        PUSH ESI
00619A28  8B F1                     MOV ESI,ECX
00619A2A  57                        PUSH EDI
00619A2B  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
00619A31  85 C0                     TEST EAX,EAX
00619A33  7D 0C                     JGE 0x00619a41
00619A35  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
00619A3B  50                        PUSH EAX
00619A3C  E8 AA BC DE FF            CALL 0x004056eb
LAB_00619a41:
00619A41  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
00619A47  85 FF                     TEST EDI,EDI
00619A49  0F 84 70 01 00 00         JZ 0x00619bbf
00619A4F  A0 4D 87 80 00            MOV AL,[0x0080874d]
00619A54  0F BF 9E CD 00 00 00      MOVSX EBX,word ptr [ESI + 0xcd]
00619A5B  3C FF                     CMP AL,0xff
00619A5D  74 77                     JZ 0x00619ad6
00619A5F  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
00619A65  85 C0                     TEST EAX,EAX
00619A67  74 6D                     JZ 0x00619ad6
00619A69  0F BF 86 CB 00 00 00      MOVSX EAX,word ptr [ESI + 0xcb]
00619A70  8D 4D F8                  LEA ECX,[EBP + -0x8]
00619A73  8D 55 FC                  LEA EDX,[EBP + -0x4]
00619A76  51                        PUSH ECX
00619A77  52                        PUSH EDX
00619A78  0F BF 8E C9 00 00 00      MOVSX ECX,word ptr [ESI + 0xc9]
00619A7F  8B 97 0C 01 00 00         MOV EDX,dword ptr [EDI + 0x10c]
00619A85  50                        PUSH EAX
00619A86  51                        PUSH ECX
00619A87  52                        PUSH EDX
00619A88  8B CF                     MOV ECX,EDI
00619A8A  E8 C4 A4 DE FF            CALL 0x00403f53
00619A8F  85 DB                     TEST EBX,EBX
00619A91  7C 43                     JL 0x00619ad6
00619A93  83 FB 05                  CMP EBX,0x5
00619A96  7D 3E                     JGE 0x00619ad6
00619A98  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00619A9B  85 D2                     TEST EDX,EDX
00619A9D  7C 37                     JL 0x00619ad6
00619A9F  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00619AA2  3B D1                     CMP EDX,ECX
00619AA4  7D 30                     JGE 0x00619ad6
00619AA6  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
00619AAD  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00619AB0  03 C3                     ADD EAX,EBX
00619AB2  85 C0                     TEST EAX,EAX
00619AB4  7C 20                     JL 0x00619ad6
00619AB6  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
00619AB9  7D 1B                     JGE 0x00619ad6
00619ABB  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
00619ABE  85 FF                     TEST EDI,EDI
00619AC0  74 14                     JZ 0x00619ad6
00619AC2  0F AF C1                  IMUL EAX,ECX
00619AC5  03 C7                     ADD EAX,EDI
00619AC7  33 C9                     XOR ECX,ECX
00619AC9  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
00619ACC  8B C1                     MOV EAX,ECX
00619ACE  85 C0                     TEST EAX,EAX
00619AD0  0F 84 D6 00 00 00         JZ 0x00619bac
LAB_00619ad6:
00619AD6  8B 96 AB 00 00 00         MOV EDX,dword ptr [ESI + 0xab]
00619ADC  8B 8E AF 00 00 00         MOV ECX,dword ptr [ESI + 0xaf]
00619AE2  42                        INC EDX
00619AE3  8B C2                     MOV EAX,EDX
00619AE5  89 96 AB 00 00 00         MOV dword ptr [ESI + 0xab],EDX
00619AEB  3B C1                     CMP EAX,ECX
00619AED  7C 0A                     JL 0x00619af9
00619AEF  C7 86 AB 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xab],0x0
LAB_00619af9:
00619AF9  DB 86 A7 00 00 00         FILD dword ptr [ESI + 0xa7]
00619AFF  51                        PUSH ECX
00619B00  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
00619B06  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619B0C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00619B12  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00619B18  D9 1C 24                  FSTP float ptr [ESP]
00619B1B  DB 86 A3 00 00 00         FILD dword ptr [ESI + 0xa3]
00619B21  51                        PUSH ECX
00619B22  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619B28  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00619B2E  D9 1C 24                  FSTP float ptr [ESP]
00619B31  DB 86 9F 00 00 00         FILD dword ptr [ESI + 0x9f]
00619B37  51                        PUSH ECX
00619B38  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619B3E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00619B44  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00619B4A  D9 1C 24                  FSTP float ptr [ESP]
00619B4D  52                        PUSH EDX
00619B4E  E8 0D 0E 0D 00            CALL 0x006ea960
00619B53  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
00619B59  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
00619B5F  50                        PUSH EAX
00619B60  6A 00                     PUSH 0x0
00619B62  51                        PUSH ECX
00619B63  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619B69  E8 02 07 0D 00            CALL 0x006ea270
00619B6E  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
00619B74  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619B7A  52                        PUSH EDX
00619B7B  E8 50 FB 0C 00            CALL 0x006e96d0
00619B80  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
00619B86  84 C0                     TEST AL,AL
00619B88  75 58                     JNZ 0x00619be2
00619B8A  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
00619B90  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619B96  6A 00                     PUSH 0x0
00619B98  50                        PUSH EAX
00619B99  E8 02 0F 0D 00            CALL 0x006eaaa0
00619B9E  C6 86 C4 00 00 00 01      MOV byte ptr [ESI + 0xc4],0x1
00619BA5  5F                        POP EDI
00619BA6  5E                        POP ESI
00619BA7  5B                        POP EBX
00619BA8  8B E5                     MOV ESP,EBP
00619BAA  5D                        POP EBP
00619BAB  C3                        RET
LAB_00619bac:
00619BAC  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
00619BB2  84 C0                     TEST AL,AL
00619BB4  74 2C                     JZ 0x00619be2
00619BB6  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
00619BBC  51                        PUSH ECX
00619BBD  EB 11                     JMP 0x00619bd0
LAB_00619bbf:
00619BBF  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
00619BC5  84 C0                     TEST AL,AL
00619BC7  74 19                     JZ 0x00619be2
00619BC9  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
00619BCF  52                        PUSH EDX
LAB_00619bd0:
00619BD0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619BD6  E8 85 0F 0D 00            CALL 0x006eab60
00619BDB  C6 86 C4 00 00 00 00      MOV byte ptr [ESI + 0xc4],0x0
LAB_00619be2:
00619BE2  5F                        POP EDI
00619BE3  5E                        POP ESI
00619BE4  5B                        POP EBX
00619BE5  8B E5                     MOV ESP,EBP
00619BE7  5D                        POP EBP
00619BE8  C3                        RET
