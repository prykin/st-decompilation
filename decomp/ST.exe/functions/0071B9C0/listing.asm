FUN_0071b9c0:
0071B9C0  55                        PUSH EBP
0071B9C1  8B EC                     MOV EBP,ESP
0071B9C3  81 EC B8 01 00 00         SUB ESP,0x1b8
0071B9C9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071B9CE  53                        PUSH EBX
0071B9CF  56                        PUSH ESI
0071B9D0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0071B9D3  33 F6                     XOR ESI,ESI
0071B9D5  57                        PUSH EDI
0071B9D6  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
0071B9DC  8D 8D 48 FF FF FF         LEA ECX,[EBP + 0xffffff48]
0071B9E2  56                        PUSH ESI
0071B9E3  52                        PUSH EDX
0071B9E4  89 85 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EAX
0071B9EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071B9F0  E8 FB 1D 01 00            CALL 0x0072d7f0
0071B9F5  8B F8                     MOV EDI,EAX
0071B9F7  83 C4 08                  ADD ESP,0x8
0071B9FA  3B FE                     CMP EDI,ESI
0071B9FC  0F 85 78 07 00 00         JNZ 0x0071c17a
0071BA02  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
0071BA08  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0071BA0B  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0071BA0E  39 73 60                  CMP dword ptr [EBX + 0x60],ESI
0071BA11  75 1D                     JNZ 0x0071ba30
0071BA13  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071BA16  50                        PUSH EAX
0071BA17  8B 08                     MOV ECX,dword ptr [EAX]
0071BA19  FF 51 1C                  CALL dword ptr [ECX + 0x1c]
0071BA1C  33 D2                     XOR EDX,EDX
0071BA1E  85 C0                     TEST EAX,EAX
0071BA20  0F 9D C2                  SETGE DL
0071BA23  8B C2                     MOV EAX,EDX
0071BA25  89 53 60                  MOV dword ptr [EBX + 0x60],EDX
0071BA28  3B C6                     CMP EAX,ESI
0071BA2A  0F 84 F8 01 00 00         JZ 0x0071bc28
LAB_0071ba30:
0071BA30  39 73 24                  CMP dword ptr [EBX + 0x24],ESI
0071BA33  0F 84 EF 01 00 00         JZ 0x0071bc28
0071BA39  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071BA3C  8D 95 48 FE FF FF         LEA EDX,[EBP + 0xfffffe48]
0071BA42  52                        PUSH EDX
0071BA43  68 00 01 00 00            PUSH 0x100
0071BA48  8B 08                     MOV ECX,dword ptr [EAX]
0071BA4A  50                        PUSH EAX
0071BA4B  FF 51 24                  CALL dword ptr [ECX + 0x24]
0071BA4E  3B C6                     CMP EAX,ESI
0071BA50  74 17                     JZ 0x0071ba69
0071BA52  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0071BA58  68 DB 00 00 00            PUSH 0xdb
0071BA5D  68 2C 09 7F 00            PUSH 0x7f092c
0071BA62  51                        PUSH ECX
0071BA63  50                        PUSH EAX
0071BA64  E8 D7 A3 F8 FF            CALL 0x006a5e40
LAB_0071ba69:
0071BA69  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
0071BA6C  89 73 70                  MOV dword ptr [EBX + 0x70],ESI
0071BA6F  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0071BA72  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
0071BA75  3B C6                     CMP EAX,ESI
0071BA77  0F 85 AB 01 00 00         JNZ 0x0071bc28
0071BA7D  EB 02                     JMP 0x0071ba81
LAB_0071ba7f:
0071BA7F  33 F6                     XOR ESI,ESI
LAB_0071ba81:
0071BA81  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
0071BA84  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0071BA87  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0071BA8A  3B D0                     CMP EDX,EAX
0071BA8C  73 11                     JNC 0x0071ba9f
0071BA8E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0071BA91  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
0071BA94  0F AF C2                  IMUL EAX,EDX
0071BA97  03 C7                     ADD EAX,EDI
0071BA99  42                        INC EDX
0071BA9A  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0071BA9D  EB 02                     JMP 0x0071baa1
LAB_0071ba9f:
0071BA9F  33 C0                     XOR EAX,EAX
LAB_0071baa1:
0071BAA1  3B C6                     CMP EAX,ESI
0071BAA3  0F 84 7F 01 00 00         JZ 0x0071bc28
0071BAA9  F6 00 08                  TEST byte ptr [EAX],0x8
0071BAAC  0F 85 69 01 00 00         JNZ 0x0071bc1b
0071BAB2  8B 48 5C                  MOV ECX,dword ptr [EAX + 0x5c]
0071BAB5  85 C9                     TEST ECX,ECX
0071BAB7  0F 84 5E 01 00 00         JZ 0x0071bc1b
0071BABD  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
0071BAC0  85 C9                     TEST ECX,ECX
0071BAC2  0F 85 53 01 00 00         JNZ 0x0071bc1b
0071BAC8  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
0071BACB  84 C9                     TEST CL,CL
0071BACD  0F 84 48 01 00 00         JZ 0x0071bc1b
0071BAD3  8B D1                     MOV EDX,ECX
0071BAD5  81 E2 FF 00 00 00         AND EDX,0xff
0071BADB  F6 84 15 48 FE FF FF 80   TEST byte ptr [EBP + EDX*0x1 + 0xfffffe48],0x80
0071BAE3  0F 84 FD 00 00 00         JZ 0x0071bbe6
0071BAE9  8A 50 05                  MOV DL,byte ptr [EAX + 0x5]
0071BAEC  84 D2                     TEST DL,DL
0071BAEE  75 54                     JNZ 0x0071bb44
0071BAF0  80 F9 2A                  CMP CL,0x2a
0071BAF3  74 63                     JZ 0x0071bb58
0071BAF5  80 F9 36                  CMP CL,0x36
0071BAF8  74 5E                     JZ 0x0071bb58
0071BAFA  80 F9 38                  CMP CL,0x38
0071BAFD  74 59                     JZ 0x0071bb58
0071BAFF  80 F9 B8                  CMP CL,0xb8
0071BB02  74 54                     JZ 0x0071bb58
0071BB04  80 F9 1D                  CMP CL,0x1d
0071BB07  74 4F                     JZ 0x0071bb58
0071BB09  80 F9 9D                  CMP CL,0x9d
0071BB0C  74 4A                     JZ 0x0071bb58
0071BB0E  F6 85 72 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe72],0x80
0071BB15  75 2D                     JNZ 0x0071bb44
0071BB17  F6 85 7E FE FF FF 80      TEST byte ptr [EBP + 0xfffffe7e],0x80
0071BB1E  75 24                     JNZ 0x0071bb44
0071BB20  F6 85 80 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe80],0x80
0071BB27  75 1B                     JNZ 0x0071bb44
0071BB29  F6 85 00 FF FF FF 80      TEST byte ptr [EBP + 0xffffff00],0x80
0071BB30  75 12                     JNZ 0x0071bb44
0071BB32  F6 85 65 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe65],0x80
0071BB39  75 09                     JNZ 0x0071bb44
0071BB3B  F6 85 E5 FE FF FF 80      TEST byte ptr [EBP + 0xfffffee5],0x80
0071BB42  74 14                     JZ 0x0071bb58
LAB_0071bb44:
0071BB44  81 E2 FF 00 00 00         AND EDX,0xff
0071BB4A  F6 84 15 48 FE FF FF 80   TEST byte ptr [EBP + EDX*0x1 + 0xfffffe48],0x80
0071BB52  0F 84 C3 00 00 00         JZ 0x0071bc1b
LAB_0071bb58:
0071BB58  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
0071BB5B  85 C9                     TEST ECX,ECX
0071BB5D  0F 85 B8 00 00 00         JNZ 0x0071bc1b
0071BB63  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
0071BB66  85 C9                     TEST ECX,ECX
0071BB68  75 35                     JNZ 0x0071bb9f
0071BB6A  8A 10                     MOV DL,byte ptr [EAX]
0071BB6C  B9 01 00 00 00            MOV ECX,0x1
0071BB71  84 D1                     TEST CL,DL
0071BB73  89 48 4C                  MOV dword ptr [EAX + 0x4c],ECX
0071BB76  74 09                     JZ 0x0071bb81
0071BB78  89 48 54                  MOV dword ptr [EAX + 0x54],ECX
0071BB7B  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0071BB7E  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
LAB_0071bb81:
0071BB81  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0071BB84  85 C9                     TEST ECX,ECX
0071BB86  0F 84 8F 00 00 00         JZ 0x0071bc1b
0071BB8C  8D 70 0C                  LEA ESI,[EAX + 0xc]
0071BB8F  B9 08 00 00 00            MOV ECX,0x8
0071BB94  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0071BB97  8D 55 8C                  LEA EDX,[EBP + -0x74]
0071BB9A  F3 A5                     MOVSD.REP ES:EDI,ESI
0071BB9C  52                        PUSH EDX
0071BB9D  EB 74                     JMP 0x0071bc13
LAB_0071bb9f:
0071BB9F  F6 00 01                  TEST byte ptr [EAX],0x1
0071BBA2  74 77                     JZ 0x0071bc1b
0071BBA4  8B 48 54                  MOV ECX,dword ptr [EAX + 0x54]
0071BBA7  85 C9                     TEST ECX,ECX
0071BBA9  74 05                     JZ 0x0071bbb0
0071BBAB  8B 4B 68                  MOV ECX,dword ptr [EBX + 0x68]
0071BBAE  EB 03                     JMP 0x0071bbb3
LAB_0071bbb0:
0071BBB0  8B 4B 6C                  MOV ECX,dword ptr [EBX + 0x6c]
LAB_0071bbb3:
0071BBB3  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0071BBB6  8B 78 58                  MOV EDI,dword ptr [EAX + 0x58]
0071BBB9  2B D7                     SUB EDX,EDI
0071BBBB  3B D1                     CMP EDX,ECX
0071BBBD  72 5C                     JC 0x0071bc1b
0071BBBF  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0071BBC2  8D 70 0C                  LEA ESI,[EAX + 0xc]
0071BBC5  89 48 58                  MOV dword ptr [EAX + 0x58],ECX
0071BBC8  B9 08 00 00 00            MOV ECX,0x8
0071BBCD  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0071BBD0  C7 40 54 00 00 00 00      MOV dword ptr [EAX + 0x54],0x0
0071BBD7  F3 A5                     MOVSD.REP ES:EDI,ESI
0071BBD9  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0071BBDC  85 C9                     TEST ECX,ECX
0071BBDE  74 3B                     JZ 0x0071bc1b
0071BBE0  8D 55 8C                  LEA EDX,[EBP + -0x74]
0071BBE3  52                        PUSH EDX
0071BBE4  EB 2D                     JMP 0x0071bc13
LAB_0071bbe6:
0071BBE6  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
0071BBE9  C7 40 50 00 00 00 00      MOV dword ptr [EAX + 0x50],0x0
0071BBF0  85 C9                     TEST ECX,ECX
0071BBF2  74 27                     JZ 0x0071bc1b
0071BBF4  8D 70 2C                  LEA ESI,[EAX + 0x2c]
0071BBF7  B9 08 00 00 00            MOV ECX,0x8
0071BBFC  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0071BBFF  C7 40 4C 00 00 00 00      MOV dword ptr [EAX + 0x4c],0x0
0071BC06  F3 A5                     MOVSD.REP ES:EDI,ESI
0071BC08  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
0071BC0B  85 C9                     TEST ECX,ECX
0071BC0D  74 0C                     JZ 0x0071bc1b
0071BC0F  8D 45 8C                  LEA EAX,[EBP + -0x74]
0071BC12  50                        PUSH EAX
LAB_0071bc13:
0071BC13  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0071BC16  E8 95 81 FC FF            CALL 0x006e3db0
LAB_0071bc1b:
0071BC1B  8B 43 70                  MOV EAX,dword ptr [EBX + 0x70]
0071BC1E  85 C0                     TEST EAX,EAX
0071BC20  0F 84 59 FE FF FF         JZ 0x0071ba7f
0071BC26  33 F6                     XOR ESI,ESI
LAB_0071bc28:
0071BC28  8D 4D AC                  LEA ECX,[EBP + -0x54]
0071BC2B  8D 55 BC                  LEA EDX,[EBP + -0x44]
0071BC2E  51                        PUSH ECX
0071BC2F  8D 45 C0                  LEA EAX,[EBP + -0x40]
0071BC32  52                        PUSH EDX
0071BC33  50                        PUSH EAX
0071BC34  8B CB                     MOV ECX,EBX
0071BC36  E8 F5 F9 FF FF            CALL 0x0071b630
0071BC3B  39 73 64                  CMP dword ptr [EBX + 0x64],ESI
0071BC3E  0F 84 21 05 00 00         JZ 0x0071c165
0071BC44  39 73 28                  CMP dword ptr [EBX + 0x28],ESI
0071BC47  0F 84 86 03 00 00         JZ 0x0071bfd3
0071BC4D  B9 08 00 00 00            MOV ECX,0x8
0071BC52  33 C0                     XOR EAX,EAX
0071BC54  8D 7D D0                  LEA EDI,[EBP + -0x30]
0071BC57  F3 AB                     STOSD.REP ES:EDI
0071BC59  39 73 74                  CMP dword ptr [EBX + 0x74],ESI
0071BC5C  75 05                     JNZ 0x0071bc63
0071BC5E  39 73 54                  CMP dword ptr [EBX + 0x54],ESI
0071BC61  74 2E                     JZ 0x0071bc91
LAB_0071bc63:
0071BC63  8D 7B 78                  LEA EDI,[EBX + 0x78]
0071BC66  57                        PUSH EDI
0071BC67  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0071BC6D  57                        PUSH EDI
0071BC6E  89 73 74                  MOV dword ptr [EBX + 0x74],ESI
0071BC71  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0071BC77  66 8B 4B 2C               MOV CX,word ptr [EBX + 0x2c]
0071BC7B  66 8B 53 30               MOV DX,word ptr [EBX + 0x30]
0071BC7F  89 73 54                  MOV dword ptr [EBX + 0x54],ESI
0071BC82  C7 45 E0 60 00 00 00      MOV dword ptr [EBP + -0x20],0x60
0071BC89  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
0071BC8D  66 89 55 EA               MOV word ptr [EBP + -0x16],DX
LAB_0071bc91:
0071BC91  F6 85 65 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe65],0x80
0071BC98  75 09                     JNZ 0x0071bca3
0071BC9A  F6 85 E5 FE FF FF 80      TEST byte ptr [EBP + 0xfffffee5],0x80
0071BCA1  74 08                     JZ 0x0071bcab
LAB_0071bca3:
0071BCA3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BCA6  0C 08                     OR AL,0x8
0071BCA8  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bcab:
0071BCAB  F6 85 72 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe72],0x80
0071BCB2  75 09                     JNZ 0x0071bcbd
0071BCB4  F6 85 7E FE FF FF 80      TEST byte ptr [EBP + 0xfffffe7e],0x80
0071BCBB  74 08                     JZ 0x0071bcc5
LAB_0071bcbd:
0071BCBD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BCC0  0C 04                     OR AL,0x4
0071BCC2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bcc5:
0071BCC5  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0071BCC8  F6 C2 80                  TEST DL,0x80
0071BCCB  74 08                     JZ 0x0071bcd5
0071BCCD  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BCD0  0C 01                     OR AL,0x1
0071BCD2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bcd5:
0071BCD5  F6 C6 80                  TEST DH,0x80
0071BCD8  74 08                     JZ 0x0071bce2
0071BCDA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BCDD  0C 02                     OR AL,0x2
0071BCDF  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bce2:
0071BCE2  39 75 E0                  CMP dword ptr [EBP + -0x20],ESI
0071BCE5  74 3A                     JZ 0x0071bd21
0071BCE7  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0071BCEA  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BCED  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0071BCF0  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BCF3  E8 98 54 F9 FF            CALL 0x006b1190
0071BCF8  85 C0                     TEST EAX,EAX
0071BCFA  7C 1F                     JL 0x0071bd1b
LAB_0071bcfc:
0071BCFC  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
0071BCFF  74 0B                     JZ 0x0071bd0c
0071BD01  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071BD04  8D 45 D0                  LEA EAX,[EBP + -0x30]
0071BD07  50                        PUSH EAX
0071BD08  8B 11                     MOV EDX,dword ptr [ECX]
0071BD0A  FF 12                     CALL dword ptr [EDX]
LAB_0071bd0c:
0071BD0C  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BD0F  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BD12  E8 79 54 F9 FF            CALL 0x006b1190
0071BD17  85 C0                     TEST EAX,EAX
0071BD19  7D E1                     JGE 0x0071bcfc
LAB_0071bd1b:
0071BD1B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0071BD1E  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0071bd21:
0071BD21  B9 08 00 00 00            MOV ECX,0x8
0071BD26  33 C0                     XOR EAX,EAX
0071BD28  8D 7D D0                  LEA EDI,[EBP + -0x30]
0071BD2B  F3 AB                     STOSD.REP ES:EDI
0071BD2D  F6 85 65 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe65],0x80
0071BD34  75 09                     JNZ 0x0071bd3f
0071BD36  F6 85 E5 FE FF FF 80      TEST byte ptr [EBP + 0xfffffee5],0x80
0071BD3D  74 08                     JZ 0x0071bd47
LAB_0071bd3f:
0071BD3F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BD42  0C 08                     OR AL,0x8
0071BD44  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bd47:
0071BD47  F6 85 72 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe72],0x80
0071BD4E  75 09                     JNZ 0x0071bd59
0071BD50  F6 85 7E FE FF FF 80      TEST byte ptr [EBP + 0xfffffe7e],0x80
0071BD57  74 08                     JZ 0x0071bd61
LAB_0071bd59:
0071BD59  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BD5C  0C 04                     OR AL,0x4
0071BD5E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bd61:
0071BD61  F6 C6 80                  TEST DH,0x80
0071BD64  74 08                     JZ 0x0071bd6e
0071BD66  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BD69  0C 02                     OR AL,0x2
0071BD6B  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071bd6e:
0071BD6E  F6 C2 80                  TEST DL,0x80
0071BD71  74 30                     JZ 0x0071bda3
0071BD73  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0071BD76  8B 4B 4C                  MOV ECX,dword ptr [EBX + 0x4c]
0071BD79  B8 01 00 00 00            MOV EAX,0x1
0071BD7E  0B F8                     OR EDI,EAX
0071BD80  3B CE                     CMP ECX,ESI
0071BD82  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0071BD85  75 3B                     JNZ 0x0071bdc2
0071BD87  66 8B 4B 2C               MOV CX,word ptr [EBX + 0x2c]
0071BD8B  C7 45 E0 61 00 00 00      MOV dword ptr [EBP + -0x20],0x61
0071BD92  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
0071BD96  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
0071BD9A  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
0071BD9E  89 43 4C                  MOV dword ptr [EBX + 0x4c],EAX
0071BDA1  EB 1F                     JMP 0x0071bdc2
LAB_0071bda3:
0071BDA3  39 73 4C                  CMP dword ptr [EBX + 0x4c],ESI
0071BDA6  74 1A                     JZ 0x0071bdc2
0071BDA8  66 8B 43 2C               MOV AX,word ptr [EBX + 0x2c]
0071BDAC  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
0071BDB0  C7 45 E0 62 00 00 00      MOV dword ptr [EBP + -0x20],0x62
0071BDB7  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0071BDBB  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
0071BDBF  89 73 4C                  MOV dword ptr [EBX + 0x4c],ESI
LAB_0071bdc2:
0071BDC2  39 75 E0                  CMP dword ptr [EBP + -0x20],ESI
0071BDC5  74 3A                     JZ 0x0071be01
0071BDC7  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
0071BDCA  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0071BDCD  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BDD0  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BDD3  E8 B8 53 F9 FF            CALL 0x006b1190
0071BDD8  85 C0                     TEST EAX,EAX
0071BDDA  7C 1F                     JL 0x0071bdfb
LAB_0071bddc:
0071BDDC  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
0071BDDF  74 0B                     JZ 0x0071bdec
0071BDE1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071BDE4  8D 55 D0                  LEA EDX,[EBP + -0x30]
0071BDE7  52                        PUSH EDX
0071BDE8  8B 01                     MOV EAX,dword ptr [ECX]
0071BDEA  FF 10                     CALL dword ptr [EAX]
LAB_0071bdec:
0071BDEC  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BDEF  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BDF2  E8 99 53 F9 FF            CALL 0x006b1190
0071BDF7  85 C0                     TEST EAX,EAX
0071BDF9  7D E1                     JGE 0x0071bddc
LAB_0071bdfb:
0071BDFB  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0071BDFE  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0071be01:
0071BE01  B9 08 00 00 00            MOV ECX,0x8
0071BE06  33 C0                     XOR EAX,EAX
0071BE08  8D 7D D0                  LEA EDI,[EBP + -0x30]
0071BE0B  F3 AB                     STOSD.REP ES:EDI
0071BE0D  F6 85 65 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe65],0x80
0071BE14  75 09                     JNZ 0x0071be1f
0071BE16  F6 85 E5 FE FF FF 80      TEST byte ptr [EBP + 0xfffffee5],0x80
0071BE1D  74 08                     JZ 0x0071be27
LAB_0071be1f:
0071BE1F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BE22  0C 08                     OR AL,0x8
0071BE24  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071be27:
0071BE27  F6 85 72 FE FF FF 80      TEST byte ptr [EBP + 0xfffffe72],0x80
0071BE2E  75 09                     JNZ 0x0071be39
0071BE30  F6 85 7E FE FF FF 80      TEST byte ptr [EBP + 0xfffffe7e],0x80
0071BE37  74 08                     JZ 0x0071be41
LAB_0071be39:
0071BE39  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0071BE3C  0C 04                     OR AL,0x4
0071BE3E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0071be41:
0071BE41  F6 C2 80                  TEST DL,0x80
0071BE44  BF 01 00 00 00            MOV EDI,0x1
0071BE49  74 03                     JZ 0x0071be4e
0071BE4B  09 7D E4                  OR dword ptr [EBP + -0x1c],EDI
LAB_0071be4e:
0071BE4E  F6 C6 80                  TEST DH,0x80
0071BE51  74 2C                     JZ 0x0071be7f
0071BE53  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0071BE56  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
0071BE59  83 C9 02                  OR ECX,0x2
0071BE5C  3B C6                     CMP EAX,ESI
0071BE5E  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0071BE61  75 3B                     JNZ 0x0071be9e
0071BE63  66 8B 43 2C               MOV AX,word ptr [EBX + 0x2c]
0071BE67  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
0071BE6B  C7 45 E0 63 00 00 00      MOV dword ptr [EBP + -0x20],0x63
0071BE72  66 89 45 E8               MOV word ptr [EBP + -0x18],AX
0071BE76  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
0071BE7A  89 7B 48                  MOV dword ptr [EBX + 0x48],EDI
0071BE7D  EB 1F                     JMP 0x0071be9e
LAB_0071be7f:
0071BE7F  39 73 48                  CMP dword ptr [EBX + 0x48],ESI
0071BE82  74 1A                     JZ 0x0071be9e
0071BE84  66 8B 53 2C               MOV DX,word ptr [EBX + 0x2c]
0071BE88  66 8B 43 30               MOV AX,word ptr [EBX + 0x30]
0071BE8C  C7 45 E0 64 00 00 00      MOV dword ptr [EBP + -0x20],0x64
0071BE93  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
0071BE97  66 89 45 EA               MOV word ptr [EBP + -0x16],AX
0071BE9B  89 73 48                  MOV dword ptr [EBX + 0x48],ESI
LAB_0071be9e:
0071BE9E  39 75 E0                  CMP dword ptr [EBP + -0x20],ESI
0071BEA1  74 37                     JZ 0x0071beda
0071BEA3  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BEA6  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BEA9  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
0071BEAC  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BEAF  E8 DC 52 F9 FF            CALL 0x006b1190
0071BEB4  85 C0                     TEST EAX,EAX
0071BEB6  7C 1F                     JL 0x0071bed7
LAB_0071beb8:
0071BEB8  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
0071BEBB  74 0B                     JZ 0x0071bec8
0071BEBD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071BEC0  8D 45 D0                  LEA EAX,[EBP + -0x30]
0071BEC3  50                        PUSH EAX
0071BEC4  8B 11                     MOV EDX,dword ptr [ECX]
0071BEC6  FF 12                     CALL dword ptr [EDX]
LAB_0071bec8:
0071BEC8  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BECB  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BECE  E8 BD 52 F9 FF            CALL 0x006b1190
0071BED3  85 C0                     TEST EAX,EAX
0071BED5  7D E1                     JGE 0x0071beb8
LAB_0071bed7:
0071BED7  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
LAB_0071beda:
0071BEDA  39 73 5C                  CMP dword ptr [EBX + 0x5c],ESI
0071BEDD  0F 84 F0 00 00 00         JZ 0x0071bfd3
0071BEE3  39 73 58                  CMP dword ptr [EBX + 0x58],ESI
0071BEE6  0F 84 E7 00 00 00         JZ 0x0071bfd3
0071BEEC  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0071BEEF  3B C6                     CMP EAX,ESI
0071BEF1  74 5D                     JZ 0x0071bf50
0071BEF3  33 C9                     XOR ECX,ECX
0071BEF5  66 8B 53 2C               MOV DX,word ptr [EBX + 0x2c]
0071BEF9  3B C6                     CMP EAX,ESI
0071BEFB  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
0071BEFF  0F 9E C1                  SETLE CL
0071BF02  83 C1 67                  ADD ECX,0x67
0071BF05  8B C1                     MOV EAX,ECX
0071BF07  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
0071BF0B  3B C6                     CMP EAX,ESI
0071BF0D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071BF10  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
0071BF14  74 3A                     JZ 0x0071bf50
0071BF16  8B 53 28                  MOV EDX,dword ptr [EBX + 0x28]
0071BF19  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
0071BF1C  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BF1F  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BF22  E8 69 52 F9 FF            CALL 0x006b1190
0071BF27  85 C0                     TEST EAX,EAX
0071BF29  7C 25                     JL 0x0071bf50
LAB_0071bf2b:
0071BF2B  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
0071BF2E  74 11                     JZ 0x0071bf41
0071BF30  F6 45 F0 02               TEST byte ptr [EBP + -0x10],0x2
0071BF34  74 0B                     JZ 0x0071bf41
0071BF36  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071BF39  8D 55 D0                  LEA EDX,[EBP + -0x30]
0071BF3C  52                        PUSH EDX
0071BF3D  8B 01                     MOV EAX,dword ptr [ECX]
0071BF3F  FF 10                     CALL dword ptr [EAX]
LAB_0071bf41:
0071BF41  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BF44  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BF47  E8 44 52 F9 FF            CALL 0x006b1190
0071BF4C  85 C0                     TEST EAX,EAX
0071BF4E  7D DB                     JGE 0x0071bf2b
LAB_0071bf50:
0071BF50  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
0071BF53  33 C0                     XOR EAX,EAX
0071BF55  3B CE                     CMP ECX,ESI
0071BF57  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0071BF5A  7C 77                     JL 0x0071bfd3
0071BF5C  8A 54 0D B8               MOV DL,byte ptr [EBP + ECX*0x1 + -0x48]
0071BF60  8B 4B 50                  MOV ECX,dword ptr [EBX + 0x50]
0071BF63  F6 C2 80                  TEST DL,0x80
0071BF66  74 0E                     JZ 0x0071bf76
0071BF68  3B CE                     CMP ECX,ESI
0071BF6A  75 19                     JNZ 0x0071bf85
0071BF6C  89 7B 50                  MOV dword ptr [EBX + 0x50],EDI
0071BF6F  B8 6A 00 00 00            MOV EAX,0x6a
0071BF74  EB 0C                     JMP 0x0071bf82
LAB_0071bf76:
0071BF76  3B CE                     CMP ECX,ESI
0071BF78  74 0B                     JZ 0x0071bf85
0071BF7A  89 73 50                  MOV dword ptr [EBX + 0x50],ESI
0071BF7D  B8 69 00 00 00            MOV EAX,0x69
LAB_0071bf82:
0071BF82  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_0071bf85:
0071BF85  66 8B 4B 2C               MOV CX,word ptr [EBX + 0x2c]
0071BF89  66 8B 53 30               MOV DX,word ptr [EBX + 0x30]
0071BF8D  3B C6                     CMP EAX,ESI
0071BF8F  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
0071BF93  66 89 55 EA               MOV word ptr [EBP + -0x16],DX
0071BF97  74 3A                     JZ 0x0071bfd3
0071BF99  8B 43 28                  MOV EAX,dword ptr [EBX + 0x28]
0071BF9C  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BF9F  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0071BFA2  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BFA5  E8 E6 51 F9 FF            CALL 0x006b1190
0071BFAA  85 C0                     TEST EAX,EAX
0071BFAC  7C 25                     JL 0x0071bfd3
LAB_0071bfae:
0071BFAE  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
0071BFB1  74 11                     JZ 0x0071bfc4
0071BFB3  F6 45 F0 02               TEST byte ptr [EBP + -0x10],0x2
0071BFB7  74 0B                     JZ 0x0071bfc4
0071BFB9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071BFBC  8D 45 D0                  LEA EAX,[EBP + -0x30]
0071BFBF  50                        PUSH EAX
0071BFC0  8B 11                     MOV EDX,dword ptr [ECX]
0071BFC2  FF 12                     CALL dword ptr [EDX]
LAB_0071bfc4:
0071BFC4  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
0071BFC7  8D 55 F0                  LEA EDX,[EBP + -0x10]
0071BFCA  E8 C1 51 F9 FF            CALL 0x006b1190
0071BFCF  85 C0                     TEST EAX,EAX
0071BFD1  7D DB                     JGE 0x0071bfae
LAB_0071bfd3:
0071BFD3  39 73 64                  CMP dword ptr [EBX + 0x64],ESI
0071BFD6  0F 84 89 01 00 00         JZ 0x0071c165
0071BFDC  39 73 60                  CMP dword ptr [EBX + 0x60],ESI
0071BFDF  0F 84 80 01 00 00         JZ 0x0071c165
0071BFE5  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0071BFE8  3B C6                     CMP EAX,ESI
0071BFEA  0F 84 75 01 00 00         JZ 0x0071c165
0071BFF0  89 73 70                  MOV dword ptr [EBX + 0x70],ESI
0071BFF3  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0071BFF6  39 73 70                  CMP dword ptr [EBX + 0x70],ESI
0071BFF9  0F 85 66 01 00 00         JNZ 0x0071c165
0071BFFF  EB 03                     JMP 0x0071c004
LAB_0071c001:
0071C001  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_0071c004:
0071C004  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
0071C007  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0071C00A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0071C00D  3B CA                     CMP ECX,EDX
0071C00F  73 11                     JNC 0x0071c022
0071C011  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0071C014  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0071C017  0F AF D9                  IMUL EBX,ECX
0071C01A  03 DA                     ADD EBX,EDX
0071C01C  41                        INC ECX
0071C01D  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0071C020  EB 02                     JMP 0x0071c024
LAB_0071c022:
0071C022  33 DB                     XOR EBX,EBX
LAB_0071c024:
0071C024  85 DB                     TEST EBX,EBX
0071C026  0F 84 39 01 00 00         JZ 0x0071c165
0071C02C  8B 03                     MOV EAX,dword ptr [EBX]
0071C02E  A8 08                     TEST AL,0x8
0071C030  0F 84 21 01 00 00         JZ 0x0071c157
0071C036  8B 4B 5C                  MOV ECX,dword ptr [EBX + 0x5c]
0071C039  85 C9                     TEST ECX,ECX
0071C03B  0F 84 16 01 00 00         JZ 0x0071c157
0071C041  8B 4B 60                  MOV ECX,dword ptr [EBX + 0x60]
0071C044  85 C9                     TEST ECX,ECX
0071C046  0F 85 0B 01 00 00         JNZ 0x0071c157
0071C04C  8D 4D C8                  LEA ECX,[EBP + -0x38]
0071C04F  8D 55 C4                  LEA EDX,[EBP + -0x3c]
0071C052  51                        PUSH ECX
0071C053  52                        PUSH EDX
0071C054  8D 4D AC                  LEA ECX,[EBP + -0x54]
0071C057  8D 95 48 FE FF FF         LEA EDX,[EBP + 0xfffffe48]
0071C05D  51                        PUSH ECX
0071C05E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071C061  52                        PUSH EDX
0071C062  50                        PUSH EAX
0071C063  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
0071C066  50                        PUSH EAX
0071C067  E8 F4 F6 FF FF            CALL 0x0071b760
0071C06C  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0071C06F  85 C0                     TEST EAX,EAX
0071C071  0F 84 A8 00 00 00         JZ 0x0071c11f
0071C077  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0071C07A  85 C0                     TEST EAX,EAX
0071C07C  0F 84 9D 00 00 00         JZ 0x0071c11f
0071C082  8B 43 50                  MOV EAX,dword ptr [EBX + 0x50]
0071C085  85 C0                     TEST EAX,EAX
0071C087  0F 85 CA 00 00 00         JNZ 0x0071c157
0071C08D  8B 43 4C                  MOV EAX,dword ptr [EBX + 0x4c]
0071C090  85 C0                     TEST EAX,EAX
0071C092  75 34                     JNZ 0x0071c0c8
0071C094  8A 0B                     MOV CL,byte ptr [EBX]
0071C096  B8 01 00 00 00            MOV EAX,0x1
0071C09B  84 C8                     TEST AL,CL
0071C09D  89 43 4C                  MOV dword ptr [EBX + 0x4c],EAX
0071C0A0  74 09                     JZ 0x0071c0ab
0071C0A2  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0071C0A5  89 43 54                  MOV dword ptr [EBX + 0x54],EAX
0071C0A8  89 4B 58                  MOV dword ptr [EBX + 0x58],ECX
LAB_0071c0ab:
0071C0AB  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071C0AE  85 C0                     TEST EAX,EAX
0071C0B0  0F 84 A1 00 00 00         JZ 0x0071c157
0071C0B6  8D 73 0C                  LEA ESI,[EBX + 0xc]
0071C0B9  B9 08 00 00 00            MOV ECX,0x8
0071C0BE  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0071C0C1  F3 A5                     MOVSD.REP ES:EDI,ESI
0071C0C3  E9 80 00 00 00            JMP 0x0071c148
LAB_0071c0c8:
0071C0C8  F6 03 01                  TEST byte ptr [EBX],0x1
0071C0CB  0F 84 86 00 00 00         JZ 0x0071c157
0071C0D1  8B 43 54                  MOV EAX,dword ptr [EBX + 0x54]
0071C0D4  85 C0                     TEST EAX,EAX
0071C0D6  74 08                     JZ 0x0071c0e0
0071C0D8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071C0DB  8B 41 68                  MOV EAX,dword ptr [ECX + 0x68]
0071C0DE  EB 06                     JMP 0x0071c0e6
LAB_0071c0e0:
0071C0E0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071C0E3  8B 42 6C                  MOV EAX,dword ptr [EDX + 0x6c]
LAB_0071c0e6:
0071C0E6  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0071C0E9  8B 73 58                  MOV ESI,dword ptr [EBX + 0x58]
0071C0EC  2B CE                     SUB ECX,ESI
0071C0EE  3B C8                     CMP ECX,EAX
0071C0F0  72 65                     JC 0x0071c157
0071C0F2  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0071C0F5  8D 73 0C                  LEA ESI,[EBX + 0xc]
0071C0F8  B9 08 00 00 00            MOV ECX,0x8
0071C0FD  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0071C100  89 53 58                  MOV dword ptr [EBX + 0x58],EDX
0071C103  C7 43 54 00 00 00 00      MOV dword ptr [EBX + 0x54],0x0
0071C10A  F3 A5                     MOVSD.REP ES:EDI,ESI
0071C10C  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
0071C10F  85 C0                     TEST EAX,EAX
0071C111  74 44                     JZ 0x0071c157
0071C113  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071C116  8D 45 8C                  LEA EAX,[EBP + -0x74]
0071C119  50                        PUSH EAX
0071C11A  8B 49 10                  MOV ECX,dword ptr [ECX + 0x10]
0071C11D  EB 33                     JMP 0x0071c152
LAB_0071c11f:
0071C11F  8B 43 4C                  MOV EAX,dword ptr [EBX + 0x4c]
0071C122  C7 43 50 00 00 00 00      MOV dword ptr [EBX + 0x50],0x0
0071C129  85 C0                     TEST EAX,EAX
0071C12B  74 2A                     JZ 0x0071c157
0071C12D  8D 73 2C                  LEA ESI,[EBX + 0x2c]
0071C130  B9 08 00 00 00            MOV ECX,0x8
0071C135  8D 7D 8C                  LEA EDI,[EBP + -0x74]
0071C138  C7 43 4C 00 00 00 00      MOV dword ptr [EBX + 0x4c],0x0
0071C13F  F3 A5                     MOVSD.REP ES:EDI,ESI
0071C141  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
0071C144  85 C0                     TEST EAX,EAX
0071C146  74 0F                     JZ 0x0071c157
LAB_0071c148:
0071C148  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071C14B  8D 55 8C                  LEA EDX,[EBP + -0x74]
0071C14E  52                        PUSH EDX
0071C14F  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
LAB_0071c152:
0071C152  E8 59 7C FC FF            CALL 0x006e3db0
LAB_0071c157:
0071C157  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071C15A  8B 41 70                  MOV EAX,dword ptr [ECX + 0x70]
0071C15D  85 C0                     TEST EAX,EAX
0071C15F  0F 84 9C FE FF FF         JZ 0x0071c001
LAB_0071c165:
0071C165  8B 95 48 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff48]
0071C16B  33 C0                     XOR EAX,EAX
0071C16D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071C173  5F                        POP EDI
0071C174  5E                        POP ESI
0071C175  5B                        POP EBX
0071C176  8B E5                     MOV ESP,EBP
0071C178  5D                        POP EBP
0071C179  C3                        RET
LAB_0071c17a:
0071C17A  8B 85 48 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff48]
0071C180  68 58 09 7F 00            PUSH 0x7f0958
0071C185  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071C18A  57                        PUSH EDI
0071C18B  56                        PUSH ESI
0071C18C  68 A9 01 00 00            PUSH 0x1a9
0071C191  68 2C 09 7F 00            PUSH 0x7f092c
0071C196  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071C19B  E8 30 13 F9 FF            CALL 0x006ad4d0
0071C1A0  83 C4 18                  ADD ESP,0x18
0071C1A3  85 C0                     TEST EAX,EAX
0071C1A5  74 01                     JZ 0x0071c1a8
0071C1A7  CC                        INT3
LAB_0071c1a8:
0071C1A8  68 AA 01 00 00            PUSH 0x1aa
0071C1AD  68 2C 09 7F 00            PUSH 0x7f092c
0071C1B2  56                        PUSH ESI
0071C1B3  57                        PUSH EDI
0071C1B4  E8 87 9C F8 FF            CALL 0x006a5e40
0071C1B9  8B C7                     MOV EAX,EDI
0071C1BB  5F                        POP EDI
0071C1BC  5E                        POP ESI
0071C1BD  5B                        POP EBX
0071C1BE  8B E5                     MOV ESP,EBP
0071C1C0  5D                        POP EBP
0071C1C1  C3                        RET
