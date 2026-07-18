FUN_00679c50:
00679C50  55                        PUSH EBP
00679C51  8B EC                     MOV EBP,ESP
00679C53  51                        PUSH ECX
00679C54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679C57  53                        PUSH EBX
00679C58  56                        PUSH ESI
00679C59  8B F1                     MOV ESI,ECX
00679C5B  85 C0                     TEST EAX,EAX
00679C5D  57                        PUSH EDI
00679C5E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00679C61  0F 84 A1 00 00 00         JZ 0x00679d08
00679C67  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00679C6A  85 D2                     TEST EDX,EDX
00679C6C  0F 84 96 00 00 00         JZ 0x00679d08
00679C72  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
00679C78  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00679C7B  4B                        DEC EBX
00679C7C  0F 88 86 00 00 00         JS 0x00679d08
LAB_00679c82:
00679C82  8B 8E 95 06 00 00         MOV ECX,dword ptr [ESI + 0x695]
00679C88  85 C9                     TEST ECX,ECX
00679C8A  74 75                     JZ 0x00679d01
00679C8C  85 DB                     TEST EBX,EBX
00679C8E  7C 71                     JL 0x00679d01
00679C90  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00679C93  3B D8                     CMP EBX,EAX
00679C95  7D 6A                     JGE 0x00679d01
00679C97  73 0D                     JNC 0x00679ca6
00679C99  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00679C9C  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00679C9F  0F AF C3                  IMUL EAX,EBX
00679CA2  03 C7                     ADD EAX,EDI
00679CA4  EB 02                     JMP 0x00679ca8
LAB_00679ca6:
00679CA6  33 C0                     XOR EAX,EAX
LAB_00679ca8:
00679CA8  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00679CAB  85 C9                     TEST ECX,ECX
00679CAD  74 52                     JZ 0x00679d01
00679CAF  8B 38                     MOV EDI,dword ptr [EAX]
00679CB1  85 FF                     TEST EDI,EDI
00679CB3  74 4C                     JZ 0x00679d01
00679CB5  80 3A 00                  CMP byte ptr [EDX],0x0
00679CB8  74 32                     JZ 0x00679cec
00679CBA  8D 77 3B                  LEA ESI,[EDI + 0x3b]
00679CBD  8B C2                     MOV EAX,EDX
LAB_00679cbf:
00679CBF  8A 08                     MOV CL,byte ptr [EAX]
00679CC1  8A D1                     MOV DL,CL
00679CC3  3A 0E                     CMP CL,byte ptr [ESI]
00679CC5  75 1C                     JNZ 0x00679ce3
00679CC7  84 D2                     TEST DL,DL
00679CC9  74 14                     JZ 0x00679cdf
00679CCB  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00679CCE  8A D1                     MOV DL,CL
00679CD0  3A 4E 01                  CMP CL,byte ptr [ESI + 0x1]
00679CD3  75 0E                     JNZ 0x00679ce3
00679CD5  83 C0 02                  ADD EAX,0x2
00679CD8  83 C6 02                  ADD ESI,0x2
00679CDB  84 D2                     TEST DL,DL
00679CDD  75 E0                     JNZ 0x00679cbf
LAB_00679cdf:
00679CDF  33 C0                     XOR EAX,EAX
00679CE1  EB 05                     JMP 0x00679ce8
LAB_00679ce3:
00679CE3  1B C0                     SBB EAX,EAX
00679CE5  83 D8 FF                  SBB EAX,-0x1
LAB_00679ce8:
00679CE8  85 C0                     TEST EAX,EAX
00679CEA  75 0F                     JNZ 0x00679cfb
LAB_00679cec:
00679CEC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00679CEF  8B CF                     MOV ECX,EDI
00679CF1  52                        PUSH EDX
00679CF2  E8 A5 BD D8 FF            CALL 0x00405a9c
00679CF7  85 C0                     TEST EAX,EAX
00679CF9  7D 10                     JGE 0x00679d0b
LAB_00679cfb:
00679CFB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00679CFE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_00679d01:
00679D01  4B                        DEC EBX
00679D02  0F 89 7A FF FF FF         JNS 0x00679c82
LAB_00679d08:
00679D08  83 C8 FF                  OR EAX,0xffffffff
LAB_00679d0b:
00679D0B  5F                        POP EDI
00679D0C  5E                        POP ESI
00679D0D  5B                        POP EBX
00679D0E  8B E5                     MOV ESP,EBP
00679D10  5D                        POP EBP
00679D11  C2 08 00                  RET 0x8
