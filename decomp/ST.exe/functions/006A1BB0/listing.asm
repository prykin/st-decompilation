FUN_006a1bb0:
006A1BB0  55                        PUSH EBP
006A1BB1  8B EC                     MOV EBP,ESP
006A1BB3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A1BB6  53                        PUSH EBX
006A1BB7  56                        PUSH ESI
006A1BB8  57                        PUSH EDI
006A1BB9  85 C9                     TEST ECX,ECX
006A1BBB  7C 74                     JL 0x006a1c31
006A1BBD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A1BC0  3B 0F                     CMP ECX,dword ptr [EDI]
006A1BC2  7D 6D                     JGE 0x006a1c31
006A1BC4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A1BC7  85 D2                     TEST EDX,EDX
006A1BC9  7C 66                     JL 0x006a1c31
006A1BCB  3B 57 04                  CMP EDX,dword ptr [EDI + 0x4]
006A1BCE  7D 61                     JGE 0x006a1c31
006A1BD0  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A1BD3  85 C0                     TEST EAX,EAX
006A1BD5  7C 5A                     JL 0x006a1c31
006A1BD7  83 F8 06                  CMP EAX,0x6
006A1BDA  7D 55                     JGE 0x006a1c31
006A1BDC  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006A1BDF  BE 2C F8 7D 00            MOV ESI,0x7df82c
006A1BE4  EB 03                     JMP 0x006a1be9
LAB_006a1be6:
006A1BE6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_006a1be9:
006A1BE9  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
006A1BEC  03 C1                     ADD EAX,ECX
006A1BEE  8B 0E                     MOV ECX,dword ptr [ESI]
006A1BF0  03 CA                     ADD ECX,EDX
006A1BF2  85 C0                     TEST EAX,EAX
006A1BF4  7C 30                     JL 0x006a1c26
006A1BF6  3B 07                     CMP EAX,dword ptr [EDI]
006A1BF8  7D 2C                     JGE 0x006a1c26
006A1BFA  85 C9                     TEST ECX,ECX
006A1BFC  7C 28                     JL 0x006a1c26
006A1BFE  3B 4F 04                  CMP ECX,dword ptr [EDI + 0x4]
006A1C01  7D 23                     JGE 0x006a1c26
006A1C03  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A1C06  53                        PUSH EBX
006A1C07  52                        PUSH EDX
006A1C08  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1C0B  52                        PUSH EDX
006A1C0C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A1C0F  52                        PUSH EDX
006A1C10  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A1C13  52                        PUSH EDX
006A1C14  51                        PUSH ECX
006A1C15  50                        PUSH EAX
006A1C16  57                        PUSH EDI
006A1C17  E8 56 22 D6 FF            CALL 0x00403e72
006A1C1C  83 C4 20                  ADD ESP,0x20
006A1C1F  85 C0                     TEST EAX,EAX
006A1C21  74 18                     JZ 0x006a1c3b
006A1C23  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006a1c26:
006A1C26  83 C6 08                  ADD ESI,0x8
006A1C29  81 FE 6C F8 7D 00         CMP ESI,0x7df86c
006A1C2F  7C B5                     JL 0x006a1be6
LAB_006a1c31:
006A1C31  5F                        POP EDI
006A1C32  5E                        POP ESI
006A1C33  B8 01 00 00 00            MOV EAX,0x1
006A1C38  5B                        POP EBX
006A1C39  5D                        POP EBP
006A1C3A  C3                        RET
LAB_006a1c3b:
006A1C3B  5F                        POP EDI
006A1C3C  5E                        POP ESI
006A1C3D  33 C0                     XOR EAX,EAX
006A1C3F  5B                        POP EBX
006A1C40  5D                        POP EBP
006A1C41  C3                        RET
