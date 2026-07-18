FUN_004e8030:
004E8030  55                        PUSH EBP
004E8031  8B EC                     MOV EBP,ESP
004E8033  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E8036  53                        PUSH EBX
004E8037  33 C9                     XOR ECX,ECX
004E8039  56                        PUSH ESI
004E803A  83 F8 01                  CMP EAX,0x1
004E803D  57                        PUSH EDI
004E803E  7C 32                     JL 0x004e8072
004E8040  83 F8 29                  CMP EAX,0x29
004E8043  7D 2D                     JGE 0x004e8072
004E8045  8D 58 41                  LEA EBX,[EAX + 0x41]
004E8048  33 FF                     XOR EDI,EDI
004E804A  BE 30 0F 80 00            MOV ESI,0x800f30
LAB_004e804f:
004E804F  6A FF                     PUSH -0x1
004E8051  53                        PUSH EBX
004E8052  56                        PUSH ESI
004E8053  E8 78 8F 1C 00            CALL 0x006b0fd0
004E8058  83 C4 0C                  ADD ESP,0xc
004E805B  85 C0                     TEST EAX,EAX
004E805D  75 4A                     JNZ 0x004e80a9
004E805F  83 C6 10                  ADD ESI,0x10
004E8062  47                        INC EDI
004E8063  81 FE 60 0F 80 00         CMP ESI,0x800f60
004E8069  7C E4                     JL 0x004e804f
004E806B  5F                        POP EDI
004E806C  5E                        POP ESI
004E806D  5B                        POP EBX
004E806E  5D                        POP EBP
004E806F  C2 04 00                  RET 0x4
LAB_004e8072:
004E8072  83 F8 32                  CMP EAX,0x32
004E8075  7C 3C                     JL 0x004e80b3
004E8077  83 F8 74                  CMP EAX,0x74
004E807A  7D 37                     JGE 0x004e80b3
004E807C  8D 58 CE                  LEA EBX,[EAX + -0x32]
004E807F  33 FF                     XOR EDI,EDI
004E8081  BE B0 0F 80 00            MOV ESI,0x800fb0
LAB_004e8086:
004E8086  6A FF                     PUSH -0x1
004E8088  53                        PUSH EBX
004E8089  56                        PUSH ESI
004E808A  E8 41 8F 1C 00            CALL 0x006b0fd0
004E808F  83 C4 0C                  ADD ESP,0xc
004E8092  85 C0                     TEST EAX,EAX
004E8094  75 13                     JNZ 0x004e80a9
004E8096  83 C6 10                  ADD ESI,0x10
004E8099  47                        INC EDI
004E809A  81 FE E0 0F 80 00         CMP ESI,0x800fe0
004E80A0  7C E4                     JL 0x004e8086
004E80A2  5F                        POP EDI
004E80A3  5E                        POP ESI
004E80A4  5B                        POP EBX
004E80A5  5D                        POP EBP
004E80A6  C2 04 00                  RET 0x4
LAB_004e80a9:
004E80A9  8D 47 01                  LEA EAX,[EDI + 0x1]
004E80AC  5F                        POP EDI
004E80AD  5E                        POP ESI
004E80AE  5B                        POP EBX
004E80AF  5D                        POP EBP
004E80B0  C2 04 00                  RET 0x4
LAB_004e80b3:
004E80B3  5F                        POP EDI
004E80B4  5E                        POP ESI
004E80B5  8B C1                     MOV EAX,ECX
004E80B7  5B                        POP EBX
004E80B8  5D                        POP EBP
004E80B9  C2 04 00                  RET 0x4
