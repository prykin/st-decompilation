FUN_006bbb20:
006BBB20  55                        PUSH EBP
006BBB21  8B EC                     MOV EBP,ESP
006BBB23  81 EC 24 04 00 00         SUB ESP,0x424
006BBB29  56                        PUSH ESI
006BBB2A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006BBB2D  57                        PUSH EDI
006BBB2E  33 FF                     XOR EDI,EDI
006BBB30  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BBB33  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BBB36  F6 C4 08                  TEST AH,0x8
006BBB39  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006BBB3C  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
006BBB3F  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006BBB42  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006BBB45  0F 85 DE 02 00 00         JNZ 0x006bbe29
006BBB4B  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BBB4E  3B C7                     CMP EAX,EDI
006BBB50  0F 84 D3 02 00 00         JZ 0x006bbe29
006BBB56  8B 08                     MOV ECX,dword ptr [EAX]
006BBB58  8D 55 DC                  LEA EDX,[EBP + -0x24]
006BBB5B  52                        PUSH EDX
006BBB5C  50                        PUSH EAX
006BBB5D  FF 51 38                  CALL dword ptr [ECX + 0x38]
006BBB60  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006BBB63  33 C9                     XOR ECX,ECX
006BBB65  3B C7                     CMP EAX,EDI
006BBB67  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006BBB6A  74 0D                     JZ 0x006bbb79
006BBB6C  8B 08                     MOV ECX,dword ptr [EAX]
006BBB6E  8D 55 CC                  LEA EDX,[EBP + -0x34]
006BBB71  52                        PUSH EDX
006BBB72  50                        PUSH EAX
006BBB73  FF 51 38                  CALL dword ptr [ECX + 0x38]
006BBB76  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_006bbb79:
006BBB79  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BBB7C  3B D7                     CMP EDX,EDI
006BBB7E  74 23                     JZ 0x006bbba3
006BBB80  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006BBB83  F6 C4 40                  TEST AH,0x40
006BBB86  74 07                     JZ 0x006bbb8f
006BBB88  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006bbb8f:
006BBB8F  39 7E 44                  CMP dword ptr [ESI + 0x44],EDI
006BBB92  0F 84 ED 00 00 00         JZ 0x006bbc85
006BBB98  F6 C5 40                  TEST CH,0x40
006BBB9B  0F 84 E4 00 00 00         JZ 0x006bbc85
006BBBA1  EB 2B                     JMP 0x006bbbce
LAB_006bbba3:
006BBBA3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006BBBA6  3B C7                     CMP EAX,EDI
006BBBA8  74 06                     JZ 0x006bbbb0
006BBBAA  F6 46 0B 10               TEST byte ptr [ESI + 0xb],0x10
006BBBAE  75 0D                     JNZ 0x006bbbbd
LAB_006bbbb0:
006BBBB0  F6 45 DD 40               TEST byte ptr [EBP + -0x23],0x40
006BBBB4  75 07                     JNZ 0x006bbbbd
006BBBB6  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_006bbbbd:
006BBBBD  3B C7                     CMP EAX,EDI
006BBBBF  0F 84 C0 00 00 00         JZ 0x006bbc85
006BBBC5  F6 C5 40                  TEST CH,0x40
006BBBC8  0F 85 B7 00 00 00         JNZ 0x006bbc85
LAB_006bbbce:
006BBBCE  B9 1F 00 00 00            MOV ECX,0x1f
006BBBD3  33 C0                     XOR EAX,EAX
006BBBD5  8D BD D4 FE FF FF         LEA EDI,[EBP + 0xfffffed4]
006BBBDB  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
006BBBE2  F3 AB                     STOSD.REP ES:EDI
006BBBE4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006BBBE7  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006BBBEA  85 D2                     TEST EDX,EDX
006BBBEC  C7 85 D4 FE FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xfffffed4],0x7c
006BBBF6  C7 85 D8 FE FF FF 07 00 00 00  MOV dword ptr [EBP + 0xfffffed8],0x7
006BBC00  89 85 E0 FE FF FF         MOV dword ptr [EBP + 0xfffffee0],EAX
006BBC06  89 8D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],ECX
006BBC0C  C7 85 3C FF FF FF 40 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x40
006BBC16  74 0A                     JZ 0x006bbc22
006BBC18  C7 85 3C FF FF FF 40 08 00 00  MOV dword ptr [EBP + 0xffffff3c],0x840
LAB_006bbc22:
006BBC22  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006BBC25  B8 08 00 00 00            MOV EAX,0x8
006BBC2A  3B C8                     CMP ECX,EAX
006BBC2C  75 24                     JNZ 0x006bbc52
006BBC2E  C7 85 D8 FE FF FF 07 10 00 00  MOV dword ptr [EBP + 0xfffffed8],0x1007
006BBC38  C7 85 1C FF FF FF 20 00 00 00  MOV dword ptr [EBP + 0xffffff1c],0x20
006BBC42  C7 85 20 FF FF FF 60 00 00 00  MOV dword ptr [EBP + 0xffffff20],0x60
006BBC4C  89 85 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],EAX
LAB_006bbc52:
006BBC52  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BBC55  8D 4D F8                  LEA ECX,[EBP + -0x8]
006BBC58  6A 00                     PUSH 0x0
006BBC5A  51                        PUSH ECX
006BBC5B  8B 10                     MOV EDX,dword ptr [EAX]
006BBC5D  8D 8D D4 FE FF FF         LEA ECX,[EBP + 0xfffffed4]
006BBC63  51                        PUSH ECX
006BBC64  50                        PUSH EAX
006BBC65  FF 52 18                  CALL dword ptr [EDX + 0x18]
006BBC68  85 C0                     TEST EAX,EAX
006BBC6A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006BBC6D  0F 85 8A 01 00 00         JNZ 0x006bbdfd
006BBC73  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006BBC76  8D 4D CC                  LEA ECX,[EBP + -0x34]
006BBC79  51                        PUSH ECX
006BBC7A  50                        PUSH EAX
006BBC7B  8B 10                     MOV EDX,dword ptr [EAX]
006BBC7D  FF 52 38                  CALL dword ptr [EDX + 0x38]
006BBC80  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BBC83  33 FF                     XOR EDI,EDI
LAB_006bbc85:
006BBC85  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
006BBC88  0F 84 9E 00 00 00         JZ 0x006bbd2c
006BBC8E  B9 1F 00 00 00            MOV ECX,0x1f
006BBC93  33 C0                     XOR EAX,EAX
006BBC95  8D BD 50 FF FF FF         LEA EDI,[EBP + 0xffffff50]
006BBC9B  F3 AB                     STOSD.REP ES:EDI
006BBC9D  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006BBCA0  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
006BBCA3  85 D2                     TEST EDX,EDX
006BBCA5  C7 85 50 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff50],0x7c
006BBCAF  C7 85 54 FF FF FF 07 00 00 00  MOV dword ptr [EBP + 0xffffff54],0x7
006BBCB9  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
006BBCBF  89 8D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],ECX
006BBCC5  C7 45 B8 40 00 00 00      MOV dword ptr [EBP + -0x48],0x40
006BBCCC  74 07                     JZ 0x006bbcd5
006BBCCE  C7 45 B8 40 08 00 00      MOV dword ptr [EBP + -0x48],0x840
LAB_006bbcd5:
006BBCD5  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006BBCD8  B8 08 00 00 00            MOV EAX,0x8
006BBCDD  3B C8                     CMP ECX,EAX
006BBCDF  75 1B                     JNZ 0x006bbcfc
006BBCE1  C7 85 54 FF FF FF 07 10 00 00  MOV dword ptr [EBP + 0xffffff54],0x1007
006BBCEB  C7 45 98 20 00 00 00      MOV dword ptr [EBP + -0x68],0x20
006BBCF2  C7 45 9C 60 00 00 00      MOV dword ptr [EBP + -0x64],0x60
006BBCF9  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
LAB_006bbcfc:
006BBCFC  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BBCFF  8D 4D F0                  LEA ECX,[EBP + -0x10]
006BBD02  6A 00                     PUSH 0x0
006BBD04  51                        PUSH ECX
006BBD05  8B 10                     MOV EDX,dword ptr [EAX]
006BBD07  8D 8D 50 FF FF FF         LEA ECX,[EBP + 0xffffff50]
006BBD0D  51                        PUSH ECX
006BBD0E  50                        PUSH EAX
006BBD0F  FF 52 18                  CALL dword ptr [EDX + 0x18]
006BBD12  85 C0                     TEST EAX,EAX
006BBD14  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006BBD17  0F 85 E0 00 00 00         JNZ 0x006bbdfd
006BBD1D  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BBD20  8D 4D DC                  LEA ECX,[EBP + -0x24]
006BBD23  51                        PUSH ECX
006BBD24  50                        PUSH EAX
006BBD25  8B 10                     MOV EDX,dword ptr [EAX]
006BBD27  FF 52 38                  CALL dword ptr [EDX + 0x38]
006BBD2A  33 FF                     XOR EDI,EDI
LAB_006bbd2c:
006BBD2C  39 7D F4                  CMP dword ptr [EBP + -0xc],EDI
006BBD2F  74 28                     JZ 0x006bbd59
006BBD31  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
006BBD34  3B C7                     CMP EAX,EDI
006BBD36  74 09                     JZ 0x006bbd41
006BBD38  8B 10                     MOV EDX,dword ptr [EAX]
006BBD3A  50                        PUSH EAX
006BBD3B  FF 52 08                  CALL dword ptr [EDX + 0x8]
006BBD3E  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
LAB_006bbd41:
006BBD41  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006BBD44  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006BBD47  83 F9 08                  CMP ECX,0x8
006BBD4A  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
006BBD4D  75 0A                     JNZ 0x006bbd59
006BBD4F  8B 56 3C                  MOV EDX,dword ptr [ESI + 0x3c]
006BBD52  8B 08                     MOV ECX,dword ptr [EAX]
006BBD54  52                        PUSH EDX
006BBD55  50                        PUSH EAX
006BBD56  FF 51 7C                  CALL dword ptr [ECX + 0x7c]
LAB_006bbd59:
006BBD59  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
006BBD5C  74 28                     JZ 0x006bbd86
006BBD5E  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006BBD61  3B C7                     CMP EAX,EDI
006BBD63  74 09                     JZ 0x006bbd6e
006BBD65  8B 08                     MOV ECX,dword ptr [EAX]
006BBD67  50                        PUSH EAX
006BBD68  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BBD6B  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
LAB_006bbd6e:
006BBD6E  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
006BBD71  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006BBD74  83 F9 08                  CMP ECX,0x8
006BBD77  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
006BBD7A  75 0A                     JNZ 0x006bbd86
006BBD7C  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
006BBD7F  8B 10                     MOV EDX,dword ptr [EAX]
006BBD81  51                        PUSH ECX
006BBD82  50                        PUSH EAX
006BBD83  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
LAB_006bbd86:
006BBD86  B8 7C 01 00 00            MOV EAX,0x17c
006BBD8B  8D 8D DC FB FF FF         LEA ECX,[EBP + 0xfffffbdc]
006BBD91  89 85 58 FD FF FF         MOV dword ptr [EBP + 0xfffffd58],EAX
006BBD97  89 85 DC FB FF FF         MOV dword ptr [EBP + 0xfffffbdc],EAX
006BBD9D  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
006BBDA0  51                        PUSH ECX
006BBDA1  8D 8D 58 FD FF FF         LEA ECX,[EBP + 0xfffffd58]
006BBDA7  8B 10                     MOV EDX,dword ptr [EAX]
006BBDA9  51                        PUSH ECX
006BBDAA  50                        PUSH EAX
006BBDAB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006BBDAE  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006BBDB1  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006BBDB4  24 FD                     AND AL,0xfd
006BBDB6  F6 C5 40                  TEST CH,0x40
006BBDB9  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006BBDBC  74 09                     JZ 0x006bbdc7
006BBDBE  F6 85 5C FD FF FF 40      TEST byte ptr [EBP + 0xfffffd5c],0x40
006BBDC5  75 0E                     JNZ 0x006bbdd5
LAB_006bbdc7:
006BBDC7  F6 C5 08                  TEST CH,0x8
006BBDCA  74 0E                     JZ 0x006bbdda
006BBDCC  F6 85 04 FE FF FF 40      TEST byte ptr [EBP + 0xfffffe04],0x40
006BBDD3  74 05                     JZ 0x006bbdda
LAB_006bbdd5:
006BBDD5  0C 02                     OR AL,0x2
006BBDD7  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_006bbdda:
006BBDDA  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006BBDDD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006BBDE0  80 E6 FD                  AND DH,0xfd
006BBDE3  3B CF                     CMP ECX,EDI
006BBDE5  89 56 0C                  MOV dword ptr [ESI + 0xc],EDX
006BBDE8  8B C2                     MOV EAX,EDX
006BBDEA  74 32                     JZ 0x006bbe1e
006BBDEC  80 CC 02                  OR AH,0x2
006BBDEF  5F                        POP EDI
006BBDF0  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006BBDF3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006BBDF6  5E                        POP ESI
006BBDF7  8B E5                     MOV ESP,EBP
006BBDF9  5D                        POP EBP
006BBDFA  C2 08 00                  RET 0x8
LAB_006bbdfd:
006BBDFD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006BBE00  85 C0                     TEST EAX,EAX
006BBE02  74 0D                     JZ 0x006bbe11
006BBE04  8B 10                     MOV EDX,dword ptr [EAX]
006BBE06  50                        PUSH EAX
006BBE07  FF 52 08                  CALL dword ptr [EDX + 0x8]
006BBE0A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_006bbe11:
006BBE11  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006BBE14  85 C0                     TEST EAX,EAX
006BBE16  74 06                     JZ 0x006bbe1e
006BBE18  8B 08                     MOV ECX,dword ptr [EAX]
006BBE1A  50                        PUSH EAX
006BBE1B  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006bbe1e:
006BBE1E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006BBE21  5F                        POP EDI
006BBE22  5E                        POP ESI
006BBE23  8B E5                     MOV ESP,EBP
006BBE25  5D                        POP EBP
006BBE26  C2 08 00                  RET 0x8
LAB_006bbe29:
006BBE29  5F                        POP EDI
006BBE2A  33 C0                     XOR EAX,EAX
006BBE2C  5E                        POP ESI
006BBE2D  8B E5                     MOV ESP,EBP
006BBE2F  5D                        POP EBP
006BBE30  C2 08 00                  RET 0x8
