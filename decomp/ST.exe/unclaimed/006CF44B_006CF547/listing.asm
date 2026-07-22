006CF44B  83 FB 02                  CMP EBX,0x2
006CF44E  0F 85 93 00 00 00         JNZ 0x006cf4e7
006CF454  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006CF457  8B 50 06                  MOV EDX,dword ptr [EAX + 0x6]
006CF45A  89 95 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EDX
006CF460  0F BF 5A 0E               MOVSX EBX,word ptr [EDX + 0xe]
006CF464  2B 5D CC                  SUB EBX,dword ptr [EBP + -0x34]
006CF467  0F BF 00                  MOVSX EAX,word ptr [EAX]
006CF46A  8B 55 80                  MOV EDX,dword ptr [EBP + -0x80]
006CF46D  03 D3                     ADD EDX,EBX
006CF46F  03 C2                     ADD EAX,EDX
006CF471  03 45 20                  ADD EAX,dword ptr [EBP + 0x20]
006CF474  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006CF47A  79 0A                     JNS 0x006cf486
006CF47C  C7 85 74 FF FF FF 00 00 00 00  MOV dword ptr [EBP + 0xffffff74],0x0
006CF486  8B 95 34 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff34]
006CF48C  0F BF 5A 10               MOVSX EBX,word ptr [EDX + 0x10]
006CF490  2B 5D D0                  SUB EBX,dword ptr [EBP + -0x30]
006CF493  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006CF496  0F BF 40 02               MOVSX EAX,word ptr [EAX + 0x2]
006CF49A  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006CF4A0  03 D3                     ADD EDX,EBX
006CF4A2  03 C2                     ADD EAX,EDX
006CF4A4  03 45 24                  ADD EAX,dword ptr [EBP + 0x24]
006CF4A7  79 02                     JNS 0x006cf4ab
006CF4A9  33 C0                     XOR EAX,EAX
006CF4AB  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006CF4AE  52                        PUSH EDX
006CF4AF  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006CF4B2  52                        PUSH EDX
006CF4B3  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CF4B6  52                        PUSH EDX
006CF4B7  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
006CF4BD  52                        PUSH EDX
006CF4BE  51                        PUSH ECX
006CF4BF  8B 8D 34 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff34]
006CF4C5  51                        PUSH ECX
006CF4C6  50                        PUSH EAX
006CF4C7  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006CF4CD  52                        PUSH EDX
006CF4CE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006CF4D1  50                        PUSH EAX
006CF4D2  57                        PUSH EDI
006CF4D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CF4D6  51                        PUSH ECX
006CF4D7  E8 A4 AB 00 00            CALL 0x006da080
006CF4DC  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
006CF4E2  E9 9B FE FF FF            JMP 0x006cf382
006CF4E7  83 FB 01                  CMP EBX,0x1
006CF4EA  0F 85 92 FE FF FF         JNZ 0x006cf382
006CF4F0  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006CF4F3  83 BB D0 01 00 00 00      CMP dword ptr [EBX + 0x1d0],0x0
006CF4FA  74 57                     JZ 0x006cf553
006CF4FC  8B 5D 84                  MOV EBX,dword ptr [EBP + -0x7c]
006CF4FF  8B 5B 06                  MOV EBX,dword ptr [EBX + 0x6]
006CF502  89 9D 34 FF FF FF         MOV dword ptr [EBP + 0xffffff34],EBX
006CF508  8A 5B 0D                  MOV BL,byte ptr [EBX + 0xd]
006CF50B  80 E3 03                  AND BL,0x3
006CF50E  80 FB 01                  CMP BL,0x1
006CF511  75 40                     JNZ 0x006cf553
006CF513  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
006CF51A  8B 56 64                  MOV EDX,dword ptr [ESI + 0x64]
006CF51D  52                        PUSH EDX
006CF51E  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006CF521  50                        PUSH EAX
006CF522  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006CF525  52                        PUSH EDX
006CF526  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006CF529  50                        PUSH EAX
006CF52A  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
006CF530  52                        PUSH EDX
006CF531  51                        PUSH ECX
006CF532  8B 85 34 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff34]
006CF538  50                        PUSH EAX
006CF539  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CF53C  51                        PUSH ECX
006CF53D  57                        PUSH EDI
006CF53E  E8 9D 91 00 00            CALL 0x006d86e0
006CF543  E9 33 FE FF FF            JMP 0x006cf37b
