FUN_006bb370:
006BB370  55                        PUSH EBP
006BB371  8B EC                     MOV EBP,ESP
006BB373  83 EC 20                  SUB ESP,0x20
006BB376  53                        PUSH EBX
006BB377  56                        PUSH ESI
006BB378  57                        PUSH EDI
006BB379  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006BB37C  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006BB37F  A9 00 00 00 20            TEST EAX,0x20000000
006BB384  0F 85 F2 02 00 00         JNZ 0x006bb67c
006BB38A  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
006BB38D  F6 C5 01                  TEST CH,0x1
006BB390  0F 85 E6 02 00 00         JNZ 0x006bb67c
006BB396  8B 4F 40                  MOV ECX,dword ptr [EDI + 0x40]
006BB399  33 DB                     XOR EBX,EBX
006BB39B  3B CB                     CMP ECX,EBX
006BB39D  0F 84 D9 02 00 00         JZ 0x006bb67c
006BB3A3  A9 00 00 00 04            TEST EAX,0x4000000
006BB3A8  74 0D                     JZ 0x006bb3b7
006BB3AA  8D 87 F0 04 00 00         LEA EAX,[EDI + 0x4f0]
006BB3B0  50                        PUSH EAX
006BB3B1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006bb3b7:
006BB3B7  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006BB3BA  A9 00 00 00 02            TEST EAX,0x2000000
006BB3BF  0F 84 C7 00 00 00         JZ 0x006bb48c
006BB3C5  8B 87 E8 04 00 00         MOV EAX,dword ptr [EDI + 0x4e8]
006BB3CB  3B C3                     CMP EAX,EBX
006BB3CD  74 14                     JZ 0x006bb3e3
006BB3CF  8B 8F EC 04 00 00         MOV ECX,dword ptr [EDI + 0x4ec]
006BB3D5  53                        PUSH EBX
006BB3D6  51                        PUSH ECX
006BB3D7  FF D0                     CALL EAX
006BB3D9  8B F0                     MOV ESI,EAX
006BB3DB  3B F3                     CMP ESI,EBX
006BB3DD  0F 85 5E 02 00 00         JNZ 0x006bb641
LAB_006bb3e3:
006BB3E3  F7 47 08 00 00 00 01      TEST dword ptr [EDI + 0x8],0x1000000
006BB3EA  74 4A                     JZ 0x006bb436
006BB3EC  33 F6                     XOR ESI,ESI
LAB_006bb3ee:
006BB3EE  8B 47 48                  MOV EAX,dword ptr [EDI + 0x48]
006BB3F1  8B 4F 44                  MOV ECX,dword ptr [EDI + 0x44]
006BB3F4  53                        PUSH EBX
006BB3F5  68 00 00 00 01            PUSH 0x1000000
006BB3FA  8B 10                     MOV EDX,dword ptr [EAX]
006BB3FC  53                        PUSH EBX
006BB3FD  51                        PUSH ECX
006BB3FE  53                        PUSH EBX
006BB3FF  50                        PUSH EAX
006BB400  FF 52 14                  CALL dword ptr [EDX + 0x14]
006BB403  3B C3                     CMP EAX,EBX
006BB405  74 2F                     JZ 0x006bb436
006BB407  3D C2 01 76 88            CMP EAX,0x887601c2
006BB40C  75 08                     JNZ 0x006bb416
006BB40E  57                        PUSH EDI
006BB40F  E8 2C 38 01 00            CALL 0x006cec40
006BB414  EB 1A                     JMP 0x006bb430
LAB_006bb416:
006BB416  3D A0 00 76 88            CMP EAX,0x887600a0
006BB41B  74 07                     JZ 0x006bb424
006BB41D  3D AE 01 76 88            CMP EAX,0x887601ae
006BB422  75 12                     JNZ 0x006bb436
LAB_006bb424:
006BB424  3B F3                     CMP ESI,EBX
006BB426  75 0E                     JNZ 0x006bb436
006BB428  6A 02                     PUSH 0x2
006BB42A  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bb430:
006BB430  46                        INC ESI
006BB431  83 FE 02                  CMP ESI,0x2
006BB434  72 B8                     JC 0x006bb3ee
LAB_006bb436:
006BB436  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006BB439  6A 01                     PUSH 0x1
006BB43B  6A 00                     PUSH 0x0
006BB43D  50                        PUSH EAX
006BB43E  8B 10                     MOV EDX,dword ptr [EAX]
006BB440  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006BB443  8B F0                     MOV ESI,EAX
006BB445  85 F6                     TEST ESI,ESI
006BB447  0F 84 EC 00 00 00         JZ 0x006bb539
006BB44D  81 FE C2 01 76 88         CMP ESI,0x887601c2
006BB453  75 08                     JNZ 0x006bb45d
006BB455  57                        PUSH EDI
006BB456  E8 E5 37 01 00            CALL 0x006cec40
006BB45B  EB 24                     JMP 0x006bb481
LAB_006bb45d:
006BB45D  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BB463  74 0C                     JZ 0x006bb471
006BB465  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BB46B  0F 85 C8 00 00 00         JNZ 0x006bb539
LAB_006bb471:
006BB471  85 DB                     TEST EBX,EBX
006BB473  0F 85 C0 00 00 00         JNZ 0x006bb539
006BB479  6A 02                     PUSH 0x2
006BB47B  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bb481:
006BB481  43                        INC EBX
006BB482  83 FB 02                  CMP EBX,0x2
006BB485  72 AF                     JC 0x006bb436
006BB487  E9 AD 00 00 00            JMP 0x006bb539
LAB_006bb48c:
006BB48C  A9 00 00 00 01            TEST EAX,0x1000000
006BB491  0F 84 BF 00 00 00         JZ 0x006bb556
006BB497  8B 87 E8 04 00 00         MOV EAX,dword ptr [EDI + 0x4e8]
006BB49D  3B C3                     CMP EAX,EBX
006BB49F  74 14                     JZ 0x006bb4b5
006BB4A1  8B 8F EC 04 00 00         MOV ECX,dword ptr [EDI + 0x4ec]
006BB4A7  53                        PUSH EBX
006BB4A8  51                        PUSH ECX
006BB4A9  FF D0                     CALL EAX
006BB4AB  8B F0                     MOV ESI,EAX
006BB4AD  3B F3                     CMP ESI,EBX
006BB4AF  0F 85 8C 01 00 00         JNZ 0x006bb641
LAB_006bb4b5:
006BB4B5  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006BB4B8  8D 55 F0                  LEA EDX,[EBP + -0x10]
006BB4BB  52                        PUSH EDX
006BB4BC  50                        PUSH EAX
006BB4BD  FF 15 58 BE 85 00         CALL dword ptr [0x0085be58]
006BB4C3  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006BB4C6  8D 4D F0                  LEA ECX,[EBP + -0x10]
006BB4C9  51                        PUSH ECX
006BB4CA  52                        PUSH EDX
006BB4CB  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
006BB4D1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006BB4D4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006BB4D7  03 C8                     ADD ECX,EAX
006BB4D9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006BB4DC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006BB4DF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006BB4E2  03 C1                     ADD EAX,ECX
006BB4E4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006bb4e7:
006BB4E7  8B 4F 40                  MOV ECX,dword ptr [EDI + 0x40]
006BB4EA  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006BB4ED  6A 00                     PUSH 0x0
006BB4EF  68 00 00 00 01            PUSH 0x1000000
006BB4F4  8B 10                     MOV EDX,dword ptr [EAX]
006BB4F6  6A 00                     PUSH 0x0
006BB4F8  51                        PUSH ECX
006BB4F9  8D 4D F0                  LEA ECX,[EBP + -0x10]
006BB4FC  51                        PUSH ECX
006BB4FD  50                        PUSH EAX
006BB4FE  FF 52 14                  CALL dword ptr [EDX + 0x14]
006BB501  8B F0                     MOV ESI,EAX
006BB503  85 F6                     TEST ESI,ESI
006BB505  74 32                     JZ 0x006bb539
006BB507  81 FE C2 01 76 88         CMP ESI,0x887601c2
006BB50D  75 08                     JNZ 0x006bb517
006BB50F  57                        PUSH EDI
006BB510  E8 2B 37 01 00            CALL 0x006cec40
006BB515  EB 1C                     JMP 0x006bb533
LAB_006bb517:
006BB517  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BB51D  74 08                     JZ 0x006bb527
006BB51F  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BB525  75 12                     JNZ 0x006bb539
LAB_006bb527:
006BB527  85 DB                     TEST EBX,EBX
006BB529  75 0E                     JNZ 0x006bb539
006BB52B  6A 02                     PUSH 0x2
006BB52D  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bb533:
006BB533  43                        INC EBX
006BB534  83 FB 02                  CMP EBX,0x2
006BB537  72 AE                     JC 0x006bb4e7
LAB_006bb539:
006BB539  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BB53F  0F 84 FA 00 00 00         JZ 0x006bb63f
006BB545  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BB54B  0F 85 F0 00 00 00         JNZ 0x006bb641
006BB551  E9 E9 00 00 00            JMP 0x006bb63f
LAB_006bb556:
006BB556  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
006BB559  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
006BB55C  3B D0                     CMP EDX,EAX
006BB55E  74 21                     JZ 0x006bb581
006BB560  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
006BB563  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
006BB566  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006BB569  50                        PUSH EAX
006BB56A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BB56D  51                        PUSH ECX
006BB56E  53                        PUSH EBX
006BB56F  53                        PUSH EBX
006BB570  52                        PUSH EDX
006BB571  50                        PUSH EAX
006BB572  57                        PUSH EDI
006BB573  E8 E8 F6 FF FF            CALL 0x006bac60
006BB578  5F                        POP EDI
006BB579  5E                        POP ESI
006BB57A  5B                        POP EBX
006BB57B  8B E5                     MOV ESP,EBP
006BB57D  5D                        POP EBP
006BB57E  C2 0C 00                  RET 0xc
LAB_006bb581:
006BB581  8B 87 E8 04 00 00         MOV EAX,dword ptr [EDI + 0x4e8]
006BB587  3B C3                     CMP EAX,EBX
006BB589  74 14                     JZ 0x006bb59f
006BB58B  8B 8F EC 04 00 00         MOV ECX,dword ptr [EDI + 0x4ec]
006BB591  53                        PUSH EBX
006BB592  51                        PUSH ECX
006BB593  FF D0                     CALL EAX
006BB595  8B F0                     MOV ESI,EAX
006BB597  3B F3                     CMP ESI,EBX
006BB599  0F 85 A2 00 00 00         JNZ 0x006bb641
LAB_006bb59f:
006BB59F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BB5A2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BB5A5  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006BB5A8  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006BB5AB  8D 4D F0                  LEA ECX,[EBP + -0x10]
006BB5AE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006BB5B1  51                        PUSH ECX
006BB5B2  52                        PUSH EDX
006BB5B3  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
006BB5B9  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
006BB5BC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006BB5BF  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
006BB5C2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006BB5C5  03 C2                     ADD EAX,EDX
006BB5C7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006BB5CA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006BB5CD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006BB5D0  03 C8                     ADD ECX,EAX
006BB5D2  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006BB5D5  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006BB5D8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006bb5db:
006BB5DB  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
006BB5DE  6A 00                     PUSH 0x0
006BB5E0  8D 55 E0                  LEA EDX,[EBP + -0x20]
006BB5E3  68 00 00 00 01            PUSH 0x1000000
006BB5E8  8B 08                     MOV ECX,dword ptr [EAX]
006BB5EA  52                        PUSH EDX
006BB5EB  8B 57 40                  MOV EDX,dword ptr [EDI + 0x40]
006BB5EE  52                        PUSH EDX
006BB5EF  8D 55 F0                  LEA EDX,[EBP + -0x10]
006BB5F2  52                        PUSH EDX
006BB5F3  50                        PUSH EAX
006BB5F4  FF 51 14                  CALL dword ptr [ECX + 0x14]
006BB5F7  8B F0                     MOV ESI,EAX
006BB5F9  85 F6                     TEST ESI,ESI
006BB5FB  74 32                     JZ 0x006bb62f
006BB5FD  81 FE C2 01 76 88         CMP ESI,0x887601c2
006BB603  75 08                     JNZ 0x006bb60d
006BB605  57                        PUSH EDI
006BB606  E8 35 36 01 00            CALL 0x006cec40
006BB60B  EB 1C                     JMP 0x006bb629
LAB_006bb60d:
006BB60D  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BB613  74 08                     JZ 0x006bb61d
006BB615  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BB61B  75 12                     JNZ 0x006bb62f
LAB_006bb61d:
006BB61D  85 DB                     TEST EBX,EBX
006BB61F  75 0E                     JNZ 0x006bb62f
006BB621  6A 02                     PUSH 0x2
006BB623  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
LAB_006bb629:
006BB629  43                        INC EBX
006BB62A  83 FB 02                  CMP EBX,0x2
006BB62D  72 AC                     JC 0x006bb5db
LAB_006bb62f:
006BB62F  81 FE A0 00 76 88         CMP ESI,0x887600a0
006BB635  74 08                     JZ 0x006bb63f
006BB637  81 FE AE 01 76 88         CMP ESI,0x887601ae
006BB63D  75 02                     JNZ 0x006bb641
LAB_006bb63f:
006BB63F  33 F6                     XOR ESI,ESI
LAB_006bb641:
006BB641  F7 47 08 00 00 00 04      TEST dword ptr [EDI + 0x8],0x4000000
006BB648  74 0D                     JZ 0x006bb657
006BB64A  81 C7 F0 04 00 00         ADD EDI,0x4f0
006BB650  57                        PUSH EDI
006BB651  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006bb657:
006BB657  85 F6                     TEST ESI,ESI
006BB659  74 21                     JZ 0x006bb67c
006BB65B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006BB660  68 41 04 00 00            PUSH 0x441
006BB665  68 48 DC 7E 00            PUSH 0x7edc48
006BB66A  50                        PUSH EAX
006BB66B  56                        PUSH ESI
006BB66C  E8 CF A7 FE FF            CALL 0x006a5e40
006BB671  8B C6                     MOV EAX,ESI
006BB673  5F                        POP EDI
006BB674  5E                        POP ESI
006BB675  5B                        POP EBX
006BB676  8B E5                     MOV ESP,EBP
006BB678  5D                        POP EBP
006BB679  C2 0C 00                  RET 0xc
LAB_006bb67c:
006BB67C  5F                        POP EDI
006BB67D  5E                        POP ESI
006BB67E  33 C0                     XOR EAX,EAX
006BB680  5B                        POP EBX
006BB681  8B E5                     MOV ESP,EBP
006BB683  5D                        POP EBP
006BB684  C2 0C 00                  RET 0xc
