FUN_004ddd50:
004DDD50  55                        PUSH EBP
004DDD51  8B EC                     MOV EBP,ESP
004DDD53  83 EC 10                  SUB ESP,0x10
004DDD56  57                        PUSH EDI
004DDD57  8B F9                     MOV EDI,ECX
004DDD59  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDD5F  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
004DDD66  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004DDD69  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
004DDD70  50                        PUSH EAX
004DDD71  E8 41 6C F2 FF            CALL 0x004049b7
004DDD76  25 FF 00 00 00            AND EAX,0xff
004DDD7B  48                        DEC EAX
004DDD7C  74 21                     JZ 0x004ddd9f
004DDD7E  48                        DEC EAX
004DDD7F  74 15                     JZ 0x004ddd96
004DDD81  48                        DEC EAX
004DDD82  74 09                     JZ 0x004ddd8d
004DDD84  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004DDD8B  EB 19                     JMP 0x004ddda6
LAB_004ddd8d:
004DDD8D  C7 45 FC 78 00 00 00      MOV dword ptr [EBP + -0x4],0x78
004DDD94  EB 10                     JMP 0x004ddda6
LAB_004ddd96:
004DDD96  C7 45 FC 88 00 00 00      MOV dword ptr [EBP + -0x4],0x88
004DDD9D  EB 07                     JMP 0x004ddda6
LAB_004ddd9f:
004DDD9F  C7 45 FC 17 00 00 00      MOV dword ptr [EBP + -0x4],0x17
LAB_004ddda6:
004DDDA6  8B 87 D0 04 00 00         MOV EAX,dword ptr [EDI + 0x4d0]
004DDDAC  85 C0                     TEST EAX,EAX
004DDDAE  0F 8C A6 01 00 00         JL 0x004ddf5a
004DDDB4  53                        PUSH EBX
004DDDB5  56                        PUSH ESI
004DDDB6  8B C7                     MOV EAX,EDI
004DDDB8  8D B7 D8 04 00 00         LEA ESI,[EDI + 0x4d8]
LAB_004dddbe:
004DDDBE  8B 88 DC 04 00 00         MOV ECX,dword ptr [EAX + 0x4dc]
004DDDC4  85 C9                     TEST ECX,ECX
004DDDC6  0F 84 43 01 00 00         JZ 0x004ddf0f
004DDDCC  83 3E 00                  CMP dword ptr [ESI],0x0
004DDDCF  75 3B                     JNZ 0x004dde0c
004DDDD1  8B 46 F8                  MOV EAX,dword ptr [ESI + -0x8]
004DDDD4  8B 56 FC                  MOV EDX,dword ptr [ESI + -0x4]
004DDDD7  2D 96 00 00 00            SUB EAX,0x96
004DDDDC  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DDDDF  3B 14 8D 28 60 7E 00      CMP EDX,dword ptr [ECX*0x4 + 0x7e6028]
004DDDE6  0F 8D 23 01 00 00         JGE 0x004ddf0f
004DDDEC  C7 06 01 00 00 00         MOV dword ptr [ESI],0x1
004DDDF2  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004DDDF7  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
004DDDFE  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004DDE04  89 4E 08                  MOV dword ptr [ESI + 0x8],ECX
004DDE07  E9 03 01 00 00            JMP 0x004ddf0f
LAB_004dde0c:
004DDE0C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004DDE0F  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004DDE12  8B 5E F8                  MOV EBX,dword ptr [ESI + -0x8]
004DDE15  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDE1B  52                        PUSH EDX
004DDE1C  50                        PUSH EAX
004DDE1D  81 EB 96 00 00 00         SUB EBX,0x96
004DDE23  E8 43 3A F2 FF            CALL 0x0040186b
004DDE28  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
004DDE2B  03 C1                     ADD EAX,ECX
004DDE2D  8B CF                     MOV ECX,EDI
004DDE2F  8B 14 85 1C 60 7E 00      MOV EDX,dword ptr [EAX*0x4 + 0x7e601c]
004DDE36  8B 07                     MOV EAX,dword ptr [EDI]
004DDE38  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004DDE3B  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004DDE3E  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004DDE41  50                        PUSH EAX
004DDE42  51                        PUSH ECX
004DDE43  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDE49  E8 49 4A F2 FF            CALL 0x00402897
004DDE4E  85 C0                     TEST EAX,EAX
004DDE50  74 39                     JZ 0x004dde8b
004DDE52  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004DDE55  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004DDE58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDE5E  52                        PUSH EDX
004DDE5F  50                        PUSH EAX
004DDE60  E8 33 4E F2 FF            CALL 0x00402c98
004DDE65  85 C0                     TEST EAX,EAX
004DDE67  75 22                     JNZ 0x004dde8b
004DDE69  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DDE6C  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
004DDE73  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004DDE79  85 C9                     TEST ECX,ECX
004DDE7B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004DDE7E  74 0B                     JZ 0x004dde8b
004DDE80  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004DDE83  6A 05                     PUSH 0x5
004DDE85  50                        PUSH EAX
004DDE86  E8 69 4C F2 FF            CALL 0x00402af4
LAB_004dde8b:
004DDE8B  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
004DDE8E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004DDE91  03 CA                     ADD ECX,EDX
004DDE93  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DDE99  39 8A E4 00 00 00         CMP dword ptr [EDX + 0xe4],ECX
004DDE9F  72 6E                     JC 0x004ddf0f
004DDEA1  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
004DDEA4  8D 1C 9B                  LEA EBX,[EBX + EBX*0x4]
004DDEA7  C1 E3 02                  SHL EBX,0x2
004DDEAA  6A 03                     PUSH 0x3
004DDEAC  51                        PUSH ECX
004DDEAD  8B 83 24 60 7E 00         MOV EAX,dword ptr [EBX + 0x7e6024]
004DDEB3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDEB9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004DDEBC  E8 9B 7F F2 FF            CALL 0x00405e5c
004DDEC1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004DDEC4  3B C1                     CMP EAX,ECX
004DDEC6  7C 47                     JL 0x004ddf0f
004DDEC8  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004DDECB  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
004DDECE  51                        PUSH ECX
004DDECF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDED5  52                        PUSH EDX
004DDED6  6A 03                     PUSH 0x3
004DDED8  50                        PUSH EAX
004DDED9  E8 2E 4D F2 FF            CALL 0x00402c0c
004DDEDE  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
004DDEE1  B9 01 00 00 00            MOV ECX,0x1
004DDEE6  40                        INC EAX
004DDEE7  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004DDEEA  89 46 FC                  MOV dword ptr [ESI + -0x4],EAX
004DDEED  8B 93 28 60 7E 00         MOV EDX,dword ptr [EBX + 0x7e6028]
004DDEF3  3B C2                     CMP EAX,EDX
004DDEF5  7C 09                     JL 0x004ddf00
004DDEF7  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
004DDEFD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_004ddf00:
004DDF00  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DDF06  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DDF0C  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
LAB_004ddf0f:
004DDF0F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004DDF12  83 C6 14                  ADD ESI,0x14
004DDF15  85 C9                     TEST ECX,ECX
004DDF17  8D 86 28 FB FF FF         LEA EAX,[ESI + 0xfffffb28]
004DDF1D  0F 8D 9B FE FF FF         JGE 0x004dddbe
004DDF23  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004DDF26  5E                        POP ESI
004DDF27  85 C0                     TEST EAX,EAX
004DDF29  5B                        POP EBX
004DDF2A  74 07                     JZ 0x004ddf33
004DDF2C  8B CF                     MOV ECX,EDI
004DDF2E  E8 16 60 F2 FF            CALL 0x00403f49
LAB_004ddf33:
004DDF33  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004DDF36  85 C0                     TEST EAX,EAX
004DDF38  74 20                     JZ 0x004ddf5a
004DDF3A  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004DDF3D  33 C9                     XOR ECX,ECX
004DDF3F  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004DDF45  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
004DDF48  3B C1                     CMP EAX,ECX
004DDF4A  75 0E                     JNZ 0x004ddf5a
004DDF4C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004DDF52  8A D0                     MOV DL,AL
004DDF54  52                        PUSH EDX
004DDF55  E8 33 6C F2 FF            CALL 0x00404b8d
LAB_004ddf5a:
004DDF5A  33 C0                     XOR EAX,EAX
004DDF5C  5F                        POP EDI
004DDF5D  8B E5                     MOV ESP,EBP
004DDF5F  5D                        POP EBP
004DDF60  C3                        RET
