FUN_004a8340:
004A8340  55                        PUSH EBP
004A8341  8B EC                     MOV EBP,ESP
004A8343  83 EC 64                  SUB ESP,0x64
004A8346  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004A834B  53                        PUSH EBX
004A834C  56                        PUSH ESI
004A834D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004A8350  57                        PUSH EDI
004A8351  8D 55 A0                  LEA EDX,[EBP + -0x60]
004A8354  8D 4D 9C                  LEA ECX,[EBP + -0x64]
004A8357  6A 00                     PUSH 0x0
004A8359  52                        PUSH EDX
004A835A  C7 45 EC 40 42 0F 00      MOV dword ptr [EBP + -0x14],0xf4240
004A8361  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
004A8364  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A836A  E8 81 54 28 00            CALL 0x0072d7f0
004A836F  8B F0                     MOV ESI,EAX
004A8371  83 C4 08                  ADD ESP,0x8
004A8374  85 F6                     TEST ESI,ESI
004A8376  0F 85 59 01 00 00         JNZ 0x004a84d5
004A837C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A837F  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
004A8382  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
004A8387  8B 86 E6 01 00 00         MOV EAX,dword ptr [ESI + 0x1e6]
004A838D  83 F8 02                  CMP EAX,0x2
004A8390  75 0A                     JNZ 0x004a839c
004A8392  8B 86 0E 02 00 00         MOV EAX,dword ptr [ESI + 0x20e]
004A8398  85 C0                     TEST EAX,EAX
004A839A  75 1B                     JNZ 0x004a83b7
LAB_004a839c:
004A839C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A83A2  68 08 17 00 00            PUSH 0x1708
004A83A7  68 3C BE 7A 00            PUSH 0x7abe3c
004A83AC  51                        PUSH ECX
004A83AD  68 09 00 FE AF            PUSH 0xaffe0009
004A83B2  E8 89 DA 1F 00            CALL 0x006a5e40
LAB_004a83b7:
004A83B7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004A83BA  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A83BD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A83C3  6A 01                     PUSH 0x1
004A83C5  52                        PUSH EDX
004A83C6  50                        PUSH EAX
004A83C7  E8 EE A4 F5 FF            CALL 0x004028ba
004A83CC  8D 4D F8                  LEA ECX,[EBP + -0x8]
004A83CF  8D 55 F6                  LEA EDX,[EBP + -0xa]
004A83D2  51                        PUSH ECX
004A83D3  8D 4D F4                  LEA ECX,[EBP + -0xc]
004A83D6  52                        PUSH EDX
004A83D7  51                        PUSH ECX
004A83D8  8B C8                     MOV ECX,EAX
004A83DA  E8 E6 94 F5 FF            CALL 0x004018c5
004A83DF  8B 96 0E 02 00 00         MOV EDX,dword ptr [ESI + 0x20e]
004A83E5  33 DB                     XOR EBX,EBX
004A83E7  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
004A83EA  85 C0                     TEST EAX,EAX
004A83EC  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A83EF  0F 8E CE 00 00 00         JLE 0x004a84c3
004A83F5  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_004a83f8:
004A83F8  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
004A83FE  8D 45 E0                  LEA EAX,[EBP + -0x20]
004A8401  50                        PUSH EAX
004A8402  8B D3                     MOV EDX,EBX
004A8404  E8 67 48 20 00            CALL 0x006acc70
004A8409  8B 4D E2                  MOV ECX,dword ptr [EBP + -0x1e]
004A840C  66 81 F9 FF FF            CMP CX,0xffff
004A8411  0F 84 A0 00 00 00         JZ 0x004a84b7
004A8417  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004A841A  0F BE D4                  MOVSX EDX,AH
004A841D  52                        PUSH EDX
004A841E  51                        PUSH ECX
004A841F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A8425  50                        PUSH EAX
004A8426  E8 8F A4 F5 FF            CALL 0x004028ba
004A842B  8B F0                     MOV ESI,EAX
004A842D  8B CE                     MOV ECX,ESI
004A842F  8B 06                     MOV EAX,dword ptr [ESI]
004A8431  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A8434  83 F8 3B                  CMP EAX,0x3b
004A8437  74 0C                     JZ 0x004a8445
004A8439  8B 16                     MOV EDX,dword ptr [ESI]
004A843B  8B CE                     MOV ECX,ESI
004A843D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A8440  83 F8 60                  CMP EAX,0x60
004A8443  75 6F                     JNZ 0x004a84b4
LAB_004a8445:
004A8445  8D 45 FA                  LEA EAX,[EBP + -0x6]
004A8448  8D 4D FE                  LEA ECX,[EBP + -0x2]
004A844B  50                        PUSH EAX
004A844C  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A844F  51                        PUSH ECX
004A8450  52                        PUSH EDX
004A8451  8B CE                     MOV ECX,ESI
004A8453  E8 6D 94 F5 FF            CALL 0x004018c5
004A8458  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
004A845C  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
004A8460  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
004A8464  50                        PUSH EAX
004A8465  51                        PUSH ECX
004A8466  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
004A846A  0F BF 4D F6               MOVSX ECX,word ptr [EBP + -0xa]
004A846E  52                        PUSH EDX
004A846F  50                        PUSH EAX
004A8470  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
004A8474  51                        PUSH ECX
004A8475  52                        PUSH EDX
004A8476  E8 55 29 20 00            CALL 0x006aadd0
004A847B  3B C7                     CMP EAX,EDI
004A847D  7D 35                     JGE 0x004a84b4
004A847F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004A8482  66 8B 55 E2               MOV DX,word ptr [EBP + -0x1e]
004A8486  8B F8                     MOV EDI,EAX
004A8488  8A 45 E0                  MOV AL,byte ptr [EBP + -0x20]
004A848B  88 01                     MOV byte ptr [ECX],AL
004A848D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004A8490  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004A8494  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004A8497  66 89 10                  MOV word ptr [EAX],DX
004A849A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004A849D  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
004A84A1  66 89 0A                  MOV word ptr [EDX],CX
004A84A4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004A84A7  66 8B 55 FA               MOV DX,word ptr [EBP + -0x6]
004A84AB  66 89 01                  MOV word ptr [ECX],AX
004A84AE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004A84B1  66 89 10                  MOV word ptr [EAX],DX
LAB_004a84b4:
004A84B4  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_004a84b7:
004A84B7  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004A84BA  43                        INC EBX
004A84BB  3B D8                     CMP EBX,EAX
004A84BD  0F 8C 35 FF FF FF         JL 0x004a83f8
LAB_004a84c3:
004A84C3  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
004A84C6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004A84CC  5F                        POP EDI
004A84CD  5E                        POP ESI
004A84CE  5B                        POP EBX
004A84CF  8B E5                     MOV ESP,EBP
004A84D1  5D                        POP EBP
004A84D2  C2 18 00                  RET 0x18
LAB_004a84d5:
004A84D5  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
004A84D8  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A84DE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A84E4  74 36                     JZ 0x004a851c
004A84E6  68 E4 C4 7A 00            PUSH 0x7ac4e4
004A84EB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A84F0  56                        PUSH ESI
004A84F1  6A 00                     PUSH 0x0
004A84F3  68 1B 17 00 00            PUSH 0x171b
004A84F8  68 3C BE 7A 00            PUSH 0x7abe3c
004A84FD  E8 CE 4F 20 00            CALL 0x006ad4d0
004A8502  83 C4 18                  ADD ESP,0x18
004A8505  85 C0                     TEST EAX,EAX
004A8507  74 01                     JZ 0x004a850a
004A8509  CC                        INT3
LAB_004a850a:
004A850A  68 1C 17 00 00            PUSH 0x171c
004A850F  68 3C BE 7A 00            PUSH 0x7abe3c
004A8514  6A 00                     PUSH 0x0
004A8516  56                        PUSH ESI
004A8517  E8 24 D9 1F 00            CALL 0x006a5e40
LAB_004a851c:
004A851C  5F                        POP EDI
004A851D  5E                        POP ESI
004A851E  5B                        POP EBX
004A851F  8B E5                     MOV ESP,EBP
004A8521  5D                        POP EBP
004A8522  C2 18 00                  RET 0x18
