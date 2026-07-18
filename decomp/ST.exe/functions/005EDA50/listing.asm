FUN_005eda50:
005EDA50  55                        PUSH EBP
005EDA51  8B EC                     MOV EBP,ESP
005EDA53  83 EC 14                  SUB ESP,0x14
005EDA56  53                        PUSH EBX
005EDA57  56                        PUSH ESI
005EDA58  8B F1                     MOV ESI,ECX
005EDA5A  33 DB                     XOR EBX,EBX
005EDA5C  57                        PUSH EDI
005EDA5D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005EDA60  66 8B 46 5F               MOV AX,word ptr [ESI + 0x5f]
005EDA64  66 85 C0                  TEST AX,AX
005EDA67  0F 8E 41 01 00 00         JLE 0x005edbae
005EDA6D  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
005EDA71  8D 48 FF                  LEA ECX,[EAX + -0x1]
005EDA74  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
005EDA78  66 85 C0                  TEST AX,AX
005EDA7B  0F 8C 2D 01 00 00         JL 0x005edbae
005EDA81  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005EDA88  66 3B C7                  CMP AX,DI
005EDA8B  0F 8D 1D 01 00 00         JGE 0x005edbae
005EDA91  66 85 D2                  TEST DX,DX
005EDA94  0F 8C 14 01 00 00         JL 0x005edbae
005EDA9A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005EDAA1  0F 8D 07 01 00 00         JGE 0x005edbae
005EDAA7  66 85 C9                  TEST CX,CX
005EDAAA  0F 8C FE 00 00 00         JL 0x005edbae
005EDAB0  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
005EDAB7  0F 8D F1 00 00 00         JGE 0x005edbae
005EDABD  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
005EDAC4  0F BF C9                  MOVSX ECX,CX
005EDAC7  0F AF D9                  IMUL EBX,ECX
005EDACA  0F BF CF                  MOVSX ECX,DI
005EDACD  0F BF D2                  MOVSX EDX,DX
005EDAD0  0F AF CA                  IMUL ECX,EDX
005EDAD3  0F BF C0                  MOVSX EAX,AX
005EDAD6  03 D9                     ADD EBX,ECX
005EDAD8  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
005EDADE  03 D8                     ADD EBX,EAX
005EDAE0  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
005EDAE3  85 FF                     TEST EDI,EDI
005EDAE5  0F 84 C0 00 00 00         JZ 0x005edbab
005EDAEB  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
005EDAF1  84 C0                     TEST AL,AL
005EDAF3  74 18                     JZ 0x005edb0d
005EDAF5  8B 16                     MOV EDX,dword ptr [ESI]
005EDAF7  8B CE                     MOV ECX,ESI
005EDAF9  FF 92 28 01 00 00         CALL dword ptr [EDX + 0x128]
005EDAFF  39 47 18                  CMP dword ptr [EDI + 0x18],EAX
005EDB02  75 09                     JNZ 0x005edb0d
005EDB04  5F                        POP EDI
005EDB05  5E                        POP ESI
005EDB06  33 C0                     XOR EAX,EAX
005EDB08  5B                        POP EBX
005EDB09  8B E5                     MOV ESP,EBP
005EDB0B  5D                        POP EBP
005EDB0C  C3                        RET
LAB_005edb0d:
005EDB0D  8B 07                     MOV EAX,dword ptr [EDI]
005EDB0F  8B CF                     MOV ECX,EDI
005EDB11  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
005EDB14  83 F8 52                  CMP EAX,0x52
005EDB17  74 09                     JZ 0x005edb22
005EDB19  83 F8 5F                  CMP EAX,0x5f
005EDB1C  0F 85 89 00 00 00         JNZ 0x005edbab
LAB_005edb22:
005EDB22  8B CF                     MOV ECX,EDI
005EDB24  E8 47 79 E1 FF            CALL 0x00405470
005EDB29  85 C0                     TEST EAX,EAX
005EDB2B  74 7E                     JZ 0x005edbab
005EDB2D  8B 87 08 05 00 00         MOV EAX,dword ptr [EDI + 0x508]
005EDB33  85 C0                     TEST EAX,EAX
005EDB35  75 74                     JNZ 0x005edbab
005EDB37  8B 16                     MOV EDX,dword ptr [ESI]
005EDB39  8B CE                     MOV ECX,ESI
005EDB3B  FF 52 0C                  CALL dword ptr [EDX + 0xc]
005EDB3E  50                        PUSH EAX
005EDB3F  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005EDB42  50                        PUSH EAX
005EDB43  8B CF                     MOV ECX,EDI
005EDB45  E8 8A 79 E1 FF            CALL 0x004054d4
005EDB4A  8D 4D FC                  LEA ECX,[EBP + -0x4]
005EDB4D  8D 55 F8                  LEA EDX,[EBP + -0x8]
005EDB50  51                        PUSH ECX
005EDB51  8D 45 F4                  LEA EAX,[EBP + -0xc]
005EDB54  52                        PUSH EDX
005EDB55  8D 4D F0                  LEA ECX,[EBP + -0x10]
005EDB58  50                        PUSH EAX
005EDB59  51                        PUSH ECX
005EDB5A  8B CF                     MOV ECX,EDI
005EDB5C  E8 7D 74 E1 FF            CALL 0x00404fde
005EDB61  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005EDB64  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005EDB67  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005EDB6A  6A 3C                     PUSH 0x3c
005EDB6C  6A 01                     PUSH 0x1
005EDB6E  52                        PUSH EDX
005EDB6F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005EDB72  50                        PUSH EAX
005EDB73  51                        PUSH ECX
005EDB74  52                        PUSH EDX
005EDB75  8B CE                     MOV ECX,ESI
005EDB77  E8 4A 64 E1 FF            CALL 0x00403fc6
005EDB7C  85 C0                     TEST EAX,EAX
005EDB7E  74 2B                     JZ 0x005edbab
005EDB80  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005EDB86  BB 01 00 00 00            MOV EBX,0x1
005EDB8B  85 C9                     TEST ECX,ECX
005EDB8D  74 1F                     JZ 0x005edbae
005EDB8F  8B 87 ED 01 00 00         MOV EAX,dword ptr [EDI + 0x1ed]
005EDB95  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
005EDB9B  50                        PUSH EAX
005EDB9C  52                        PUSH EDX
005EDB9D  E8 BE C8 0F 00            CALL 0x006ea460
005EDBA2  5F                        POP EDI
005EDBA3  8B C3                     MOV EAX,EBX
005EDBA5  5E                        POP ESI
005EDBA6  5B                        POP EBX
005EDBA7  8B E5                     MOV ESP,EBP
005EDBA9  5D                        POP EBP
005EDBAA  C3                        RET
LAB_005edbab:
005EDBAB  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_005edbae:
005EDBAE  5F                        POP EDI
005EDBAF  8B C3                     MOV EAX,EBX
005EDBB1  5E                        POP ESI
005EDBB2  5B                        POP EBX
005EDBB3  8B E5                     MOV ESP,EBP
005EDBB5  5D                        POP EBP
005EDBB6  C3                        RET
