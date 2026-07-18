FUN_004a8220:
004A8220  55                        PUSH EBP
004A8221  8B EC                     MOV EBP,ESP
004A8223  51                        PUSH ECX
004A8224  53                        PUSH EBX
004A8225  56                        PUSH ESI
004A8226  8B F1                     MOV ESI,ECX
004A8228  57                        PUSH EDI
004A8229  8B 86 EF 00 00 00         MOV EAX,dword ptr [ESI + 0xef]
004A822F  85 C0                     TEST EAX,EAX
004A8231  74 52                     JZ 0x004a8285
004A8233  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A8236  85 DB                     TEST EBX,EBX
004A8238  76 4B                     JBE 0x004a8285
004A823A  33 FF                     XOR EDI,EDI
004A823C  85 DB                     TEST EBX,EBX
004A823E  7E 45                     JLE 0x004a8285
LAB_004a8240:
004A8240  8B 8E EF 00 00 00         MOV ECX,dword ptr [ESI + 0xef]
004A8246  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A8249  50                        PUSH EAX
004A824A  8B D7                     MOV EDX,EDI
004A824C  E8 1F 4A 20 00            CALL 0x006acc70
004A8251  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
004A8255  66 39 4D FE               CMP word ptr [EBP + -0x2],CX
004A8259  75 0A                     JNZ 0x004a8265
004A825B  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004A825E  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
004A8261  3A C2                     CMP AL,DL
004A8263  74 07                     JZ 0x004a826c
LAB_004a8265:
004A8265  47                        INC EDI
004A8266  3B FB                     CMP EDI,EBX
004A8268  7C D6                     JL 0x004a8240
004A826A  EB 19                     JMP 0x004a8285
LAB_004a826c:
004A826C  8B 96 EF 00 00 00         MOV EDX,dword ptr [ESI + 0xef]
004A8272  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
004A8276  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A8279  66 89 45 FE               MOV word ptr [EBP + -0x2],AX
004A827D  51                        PUSH ECX
004A827E  57                        PUSH EDI
004A827F  52                        PUSH EDX
004A8280  E8 BB 5E 20 00            CALL 0x006ae140
LAB_004a8285:
004A8285  83 BE E6 01 00 00 02      CMP dword ptr [ESI + 0x1e6],0x2
004A828C  75 63                     JNZ 0x004a82f1
004A828E  8B 86 0E 02 00 00         MOV EAX,dword ptr [ESI + 0x20e]
004A8294  85 C0                     TEST EAX,EAX
004A8296  74 59                     JZ 0x004a82f1
004A8298  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A829B  85 DB                     TEST EBX,EBX
004A829D  76 52                     JBE 0x004a82f1
004A829F  33 FF                     XOR EDI,EDI
004A82A1  85 DB                     TEST EBX,EBX
004A82A3  7E 4C                     JLE 0x004a82f1
LAB_004a82a5:
004A82A5  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
004A82AB  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A82AE  50                        PUSH EAX
004A82AF  8B D7                     MOV EDX,EDI
004A82B1  E8 BA 49 20 00            CALL 0x006acc70
004A82B6  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
004A82BA  66 39 4D FE               CMP word ptr [EBP + -0x2],CX
004A82BE  75 0A                     JNZ 0x004a82ca
004A82C0  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004A82C3  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
004A82C6  3A C2                     CMP AL,DL
004A82C8  74 0E                     JZ 0x004a82d8
LAB_004a82ca:
004A82CA  47                        INC EDI
004A82CB  3B FB                     CMP EDI,EBX
004A82CD  7C D6                     JL 0x004a82a5
004A82CF  5F                        POP EDI
004A82D0  5E                        POP ESI
004A82D1  5B                        POP EBX
004A82D2  8B E5                     MOV ESP,EBP
004A82D4  5D                        POP EBP
004A82D5  C2 0C 00                  RET 0xc
LAB_004a82d8:
004A82D8  8B 96 0E 02 00 00         MOV EDX,dword ptr [ESI + 0x20e]
004A82DE  66 8B 45 10               MOV AX,word ptr [EBP + 0x10]
004A82E2  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A82E5  66 89 45 FE               MOV word ptr [EBP + -0x2],AX
004A82E9  51                        PUSH ECX
004A82EA  57                        PUSH EDI
004A82EB  52                        PUSH EDX
004A82EC  E8 4F 5E 20 00            CALL 0x006ae140
LAB_004a82f1:
004A82F1  5F                        POP EDI
004A82F2  5E                        POP ESI
004A82F3  5B                        POP EBX
004A82F4  8B E5                     MOV ESP,EBP
004A82F6  5D                        POP EBP
004A82F7  C2 0C 00                  RET 0xc
