FUN_00428b20:
00428B20  55                        PUSH EBP
00428B21  8B EC                     MOV EBP,ESP
00428B23  83 EC 14                  SUB ESP,0x14
00428B26  53                        PUSH EBX
00428B27  56                        PUSH ESI
00428B28  57                        PUSH EDI
00428B29  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
00428B30  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00428B33  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00428B36  B8 FF FF FF FF            MOV EAX,0xffffffff
LAB_00428b3b:
00428B3B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00428B3E  C1 E9 02                  SHR ECX,0x2
00428B41  F3 AF                     SCASD.REPE ES:EDI
00428B43  75 22                     JNZ 0x00428b67
00428B45  4A                        DEC EDX
00428B46  7F F3                     JG 0x00428b3b
00428B48  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00428B4B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00428B4E  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
00428B55  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00428B58  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00428B5B  C7 45 F0 FF FF FF FF      MOV dword ptr [EBP + -0x10],0xffffffff
00428B62  E9 A0 00 00 00            JMP 0x00428c07
LAB_00428b67:
00428B67  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00428B6A  2B C2                     SUB EAX,EDX
00428B6C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00428B6F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00428B72  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00428B75  48                        DEC EAX
00428B76  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00428B79  F7 E3                     MUL EBX
00428B7B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00428B7E  03 F8                     ADD EDI,EAX
00428B80  B8 FF FF FF FF            MOV EAX,0xffffffff
LAB_00428b85:
00428B85  8B CB                     MOV ECX,EBX
00428B87  C1 E9 02                  SHR ECX,0x2
00428B8A  F3 AF                     SCASD.REPE ES:EDI
00428B8C  75 09                     JNZ 0x00428b97
00428B8E  03 F9                     ADD EDI,ECX
00428B90  2B FB                     SUB EDI,EBX
00428B92  2B FB                     SUB EDI,EBX
00428B94  4A                        DEC EDX
00428B95  7F EE                     JG 0x00428b85
LAB_00428b97:
00428B97  4A                        DEC EDX
00428B98  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00428B9B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00428B9E  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00428BA5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00428BA8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00428BAB  F7 65 0C                  MUL dword ptr [EBP + 0xc]
00428BAE  03 F0                     ADD ESI,EAX
00428BB0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00428BB3  2B 55 FC                  SUB EDX,dword ptr [EBP + -0x4]
00428BB6  42                        INC EDX
LAB_00428bb7:
00428BB7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00428BBA  8B FE                     MOV EDI,ESI
00428BBC  C1 E9 02                  SHR ECX,0x2
00428BBF  7E 17                     JLE 0x00428bd8
LAB_00428bc1:
00428BC1  8B 07                     MOV EAX,dword ptr [EDI]
00428BC3  83 C7 04                  ADD EDI,0x4
00428BC6  83 F8 FF                  CMP EAX,-0x1
00428BC9  75 05                     JNZ 0x00428bd0
00428BCB  49                        DEC ECX
00428BCC  7F F3                     JG 0x00428bc1
00428BCE  EB 08                     JMP 0x00428bd8
LAB_00428bd0:
00428BD0  83 EF 04                  SUB EDI,0x4
00428BD3  2B FE                     SUB EDI,ESI
00428BD5  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
LAB_00428bd8:
00428BD8  8B FE                     MOV EDI,ESI
00428BDA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00428BDD  03 F9                     ADD EDI,ECX
00428BDF  2B 4D F0                  SUB ECX,dword ptr [EBP + -0x10]
00428BE2  83 EF 04                  SUB EDI,0x4
00428BE5  C1 E9 02                  SHR ECX,0x2
00428BE8  7E 17                     JLE 0x00428c01
LAB_00428bea:
00428BEA  8B 07                     MOV EAX,dword ptr [EDI]
00428BEC  83 EF 04                  SUB EDI,0x4
00428BEF  83 F8 FF                  CMP EAX,-0x1
00428BF2  75 05                     JNZ 0x00428bf9
00428BF4  49                        DEC ECX
00428BF5  7F F3                     JG 0x00428bea
00428BF7  EB 08                     JMP 0x00428c01
LAB_00428bf9:
00428BF9  83 C7 08                  ADD EDI,0x8
00428BFC  2B FE                     SUB EDI,ESI
00428BFE  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_00428c01:
00428C01  03 75 0C                  ADD ESI,dword ptr [EBP + 0xc]
00428C04  4A                        DEC EDX
00428C05  7F B0                     JG 0x00428bb7
LAB_00428c07:
00428C07  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00428C0A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00428C0D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00428C10  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00428C13  8B C7                     MOV EAX,EDI
00428C15  2B C1                     SUB EAX,ECX
00428C17  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
00428C1A  89 1E                     MOV dword ptr [ESI],EBX
00428C1C  8D 50 01                  LEA EDX,[EAX + 0x1]
00428C1F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00428C22  2B C3                     SUB EAX,EBX
00428C24  3B CF                     CMP ECX,EDI
00428C26  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
00428C29  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
00428C2C  7F 44                     JG 0x00428c72
00428C2E  0F AF C2                  IMUL EAX,EDX
00428C31  8B F8                     MOV EDI,EAX
00428C33  57                        PUSH EDI
00428C34  E8 37 20 28 00            CALL 0x006aac70
00428C39  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00428C3C  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00428C3F  8B D8                     MOV EBX,EAX
00428C41  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00428C44  51                        PUSH ECX
00428C45  8B 0E                     MOV ECX,dword ptr [ESI]
00428C47  50                        PUSH EAX
00428C48  52                        PUSH EDX
00428C49  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00428C4C  51                        PUSH ECX
00428C4D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00428C50  52                        PUSH EDX
00428C51  51                        PUSH ECX
00428C52  6A 00                     PUSH 0x0
00428C54  6A 00                     PUSH 0x0
00428C56  50                        PUSH EAX
00428C57  53                        PUSH EBX
00428C58  E8 33 76 28 00            CALL 0x006b0290
00428C5D  A1 D0 4D 7F 00            MOV EAX,[0x007f4dd0]
00428C62  03 C7                     ADD EAX,EDI
00428C64  5F                        POP EDI
00428C65  A3 D0 4D 7F 00            MOV [0x007f4dd0],EAX
00428C6A  8B C3                     MOV EAX,EBX
00428C6C  5E                        POP ESI
00428C6D  5B                        POP EBX
00428C6E  8B E5                     MOV ESP,EBP
00428C70  5D                        POP EBP
00428C71  C3                        RET
LAB_00428c72:
00428C72  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00428C75  5F                        POP EDI
00428C76  5E                        POP ESI
00428C77  5B                        POP EBX
00428C78  8B E5                     MOV ESP,EBP
00428C7A  5D                        POP EBP
00428C7B  C3                        RET
