FUN_004cc370:
004CC370  56                        PUSH ESI
004CC371  8B F1                     MOV ESI,ECX
004CC373  8B 86 44 04 00 00         MOV EAX,dword ptr [ESI + 0x444]
004CC379  85 C0                     TEST EAX,EAX
004CC37B  0F 84 6F 03 00 00         JZ 0x004cc6f0
004CC381  8B 86 48 04 00 00         MOV EAX,dword ptr [ESI + 0x448]
004CC387  85 C0                     TEST EAX,EAX
004CC389  0F 84 61 03 00 00         JZ 0x004cc6f0
004CC38F  8B 86 4C 04 00 00         MOV EAX,dword ptr [ESI + 0x44c]
004CC395  53                        PUSH EBX
004CC396  85 C0                     TEST EAX,EAX
004CC398  57                        PUSH EDI
004CC399  7C 73                     JL 0x004cc40e
004CC39B  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC3A1  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
004CC3A4  8B 90 10 02 00 00         MOV EDX,dword ptr [EAX + 0x210]
004CC3AA  8B B8 0C 02 00 00         MOV EDI,dword ptr [EAX + 0x20c]
004CC3B0  3B D7                     CMP EDX,EDI
004CC3B2  0F 8C 1A 03 00 00         JL 0x004cc6d2
004CC3B8  6A 0E                     PUSH 0xe
004CC3BA  E8 A5 7E F3 FF            CALL 0x00404264
004CC3BF  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC3C5  E8 45 79 F3 FF            CALL 0x00403d0f
004CC3CA  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC3D0  6A 0E                     PUSH 0xe
004CC3D2  E8 B3 85 F3 FF            CALL 0x0040498a
004CC3D7  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC3DD  E8 EA 8E F3 FF            CALL 0x004052cc
004CC3E2  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CC3E8  50                        PUSH EAX
004CC3E9  E8 02 DF 21 00            CALL 0x006ea2f0
004CC3EE  C7 86 4C 04 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x44c],0xffffffff
004CC3F8  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CC3FD  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004CC403  89 8E 50 04 00 00         MOV dword ptr [ESI + 0x450],ECX
004CC409  E9 C4 02 00 00            JMP 0x004cc6d2
LAB_004cc40e:
004CC40E  8B 16                     MOV EDX,dword ptr [ESI]
004CC410  8B CE                     MOV ECX,ESI
004CC412  FF 52 7C                  CALL dword ptr [EDX + 0x7c]
004CC415  8B C8                     MOV ECX,EAX
004CC417  B8 67 66 66 66            MOV EAX,0x66666667
004CC41C  F7 E9                     IMUL ECX
004CC41E  C1 FA 03                  SAR EDX,0x3
004CC421  8B C2                     MOV EAX,EDX
004CC423  C1 E8 1F                  SHR EAX,0x1f
004CC426  03 D0                     ADD EDX,EAX
004CC428  83 FA 04                  CMP EDX,0x4
004CC42B  7C 15                     JL 0x004cc442
004CC42D  83 BE 3C 04 00 00 01      CMP dword ptr [ESI + 0x43c],0x1
004CC434  75 0C                     JNZ 0x004cc442
004CC436  8B CE                     MOV ECX,ESI
004CC438  E8 2B 93 F3 FF            CALL 0x00405768
004CC43D  E9 90 02 00 00            JMP 0x004cc6d2
LAB_004cc442:
004CC442  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004CC448  6A 06                     PUSH 0x6
004CC44A  8B CF                     MOV ECX,EDI
004CC44C  E8 39 85 F3 FF            CALL 0x0040498a
004CC451  8B 8E 40 04 00 00         MOV ECX,dword ptr [ESI + 0x440]
004CC457  8B C1                     MOV EAX,ECX
004CC459  89 8E 3C 04 00 00         MOV dword ptr [ESI + 0x43c],ECX
004CC45F  8B 15 14 0C 79 00         MOV EDX,dword ptr [0x00790c14]
004CC465  48                        DEC EAX
004CC466  F7 D8                     NEG EAX
004CC468  1B C0                     SBB EAX,EAX
004CC46A  F7 D0                     NOT EAX
004CC46C  23 C2                     AND EAX,EDX
004CC46E  8B 96 50 04 00 00         MOV EDX,dword ptr [ESI + 0x450]
004CC474  03 D0                     ADD EDX,EAX
004CC476  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CC47B  39 90 E4 00 00 00         CMP dword ptr [EAX + 0xe4],EDX
004CC481  0F 82 4B 02 00 00         JC 0x004cc6d2
004CC487  83 F9 02                  CMP ECX,0x2
004CC48A  75 28                     JNZ 0x004cc4b4
004CC48C  8B 0D 28 0C 79 00         MOV ECX,dword ptr [0x00790c28]
004CC492  8B 15 8C 67 80 00         MOV EDX,dword ptr [0x0080678c]
004CC498  6A 1D                     PUSH 0x1d
004CC49A  51                        PUSH ECX
004CC49B  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC4A1  52                        PUSH EDX
004CC4A2  6A 0E                     PUSH 0xe
004CC4A4  E8 DA 7C F3 FF            CALL 0x00404183
004CC4A9  85 C0                     TEST EAX,EAX
004CC4AB  74 6F                     JZ 0x004cc51c
004CC4AD  68 7C 03 00 00            PUSH 0x37c
004CC4B2  EB 56                     JMP 0x004cc50a
LAB_004cc4b4:
004CC4B4  83 F9 03                  CMP ECX,0x3
004CC4B7  74 2C                     JZ 0x004cc4e5
004CC4B9  83 F9 04                  CMP ECX,0x4
004CC4BC  74 27                     JZ 0x004cc4e5
004CC4BE  8B 15 1C 0C 79 00         MOV EDX,dword ptr [0x00790c1c]
004CC4C4  A1 64 67 80 00            MOV EAX,[0x00806764]
004CC4C9  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC4CF  6A 1D                     PUSH 0x1d
004CC4D1  52                        PUSH EDX
004CC4D2  50                        PUSH EAX
004CC4D3  6A 0E                     PUSH 0xe
004CC4D5  E8 A9 7C F3 FF            CALL 0x00404183
004CC4DA  85 C0                     TEST EAX,EAX
004CC4DC  74 3E                     JZ 0x004cc51c
004CC4DE  68 81 03 00 00            PUSH 0x381
004CC4E3  EB 25                     JMP 0x004cc50a
LAB_004cc4e5:
004CC4E5  8B 15 20 0C 79 00         MOV EDX,dword ptr [0x00790c20]
004CC4EB  A1 8C 67 80 00            MOV EAX,[0x0080678c]
004CC4F0  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC4F6  6A 1D                     PUSH 0x1d
004CC4F8  52                        PUSH EDX
004CC4F9  50                        PUSH EAX
004CC4FA  6A 0E                     PUSH 0xe
004CC4FC  E8 82 7C F3 FF            CALL 0x00404183
004CC501  85 C0                     TEST EAX,EAX
004CC503  74 17                     JZ 0x004cc51c
004CC505  68 7F 03 00 00            PUSH 0x37f
FUN_004cc370::cf_error_exit_004CC50A:
004CC50A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004CC510  68 D0 D4 7A 00            PUSH 0x7ad4d0
004CC515  51                        PUSH ECX
004CC516  50                        PUSH EAX
004CC517  E8 24 99 1D 00            CALL 0x006a5e40
LAB_004cc51c:
004CC51C  6A 06                     PUSH 0x6
004CC51E  8B CF                     MOV ECX,EDI
004CC520  E8 A7 8D F3 FF            CALL 0x004052cc
004CC525  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC52B  50                        PUSH EAX
004CC52C  E8 9B 8D F3 FF            CALL 0x004052cc
004CC531  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CC537  50                        PUSH EAX
004CC538  E8 03 DE 21 00            CALL 0x006ea340
004CC53D  8B 96 01 02 00 00         MOV EDX,dword ptr [ESI + 0x201]
004CC543  8B 86 FD 01 00 00         MOV EAX,dword ptr [ESI + 0x1fd]
004CC549  8B 8E F9 01 00 00         MOV ECX,dword ptr [ESI + 0x1f9]
004CC54F  52                        PUSH EDX
004CC550  50                        PUSH EAX
004CC551  51                        PUSH ECX
004CC552  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC558  E8 7C 80 F3 FF            CALL 0x004045d9
004CC55D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004CC560  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004CC566  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004CC56C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004CC56F  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004CC575  8B CA                     MOV ECX,EDX
004CC577  C1 E1 04                  SHL ECX,0x4
004CC57A  03 CA                     ADD ECX,EDX
004CC57C  33 D2                     XOR EDX,EDX
004CC57E  C1 E1 02                  SHL ECX,0x2
004CC581  C1 E8 10                  SHR EAX,0x10
004CC584  F7 B1 48 77 79 00         DIV dword ptr [ECX + 0x797748]
004CC58A  89 96 4C 04 00 00         MOV dword ptr [ESI + 0x44c],EDX
004CC590  8B BC D1 4C 77 79 00      MOV EDI,dword ptr [ECX + EDX*0x8 + 0x79774c]
004CC597  8B 8C D1 50 77 79 00      MOV ECX,dword ptr [ECX + EDX*0x8 + 0x797750]
004CC59E  8B 96 3C 04 00 00         MOV EDX,dword ptr [ESI + 0x43c]
004CC5A4  83 FA 02                  CMP EDX,0x2
004CC5A7  75 18                     JNZ 0x004cc5c1
004CC5A9  8B 86 13 06 00 00         MOV EAX,dword ptr [ESI + 0x613]
004CC5AF  8B 96 17 06 00 00         MOV EDX,dword ptr [ESI + 0x617]
004CC5B5  2B C7                     SUB EAX,EDI
004CC5B7  2B D1                     SUB EDX,ECX
004CC5B9  83 C0 28                  ADD EAX,0x28
004CC5BC  83 C2 1F                  ADD EDX,0x1f
004CC5BF  EB 3C                     JMP 0x004cc5fd
LAB_004cc5c1:
004CC5C1  83 FA 03                  CMP EDX,0x3
004CC5C4  74 0A                     JZ 0x004cc5d0
004CC5C6  83 FA 04                  CMP EDX,0x4
004CC5C9  BB 17 00 00 00            MOV EBX,0x17
004CC5CE  75 05                     JNZ 0x004cc5d5
LAB_004cc5d0:
004CC5D0  BB 10 00 00 00            MOV EBX,0x10
LAB_004cc5d5:
004CC5D5  8B 86 13 06 00 00         MOV EAX,dword ptr [ESI + 0x613]
004CC5DB  2B C7                     SUB EAX,EDI
004CC5DD  03 C3                     ADD EAX,EBX
004CC5DF  83 FA 03                  CMP EDX,0x3
004CC5E2  74 0A                     JZ 0x004cc5ee
004CC5E4  83 FA 04                  CMP EDX,0x4
004CC5E7  BF 5C 00 00 00            MOV EDI,0x5c
004CC5EC  75 05                     JNZ 0x004cc5f3
LAB_004cc5ee:
004CC5EE  BF 15 00 00 00            MOV EDI,0x15
LAB_004cc5f3:
004CC5F3  8B 96 17 06 00 00         MOV EDX,dword ptr [ESI + 0x617]
004CC5F9  2B D1                     SUB EDX,ECX
004CC5FB  03 D7                     ADD EDX,EDI
LAB_004cc5fd:
004CC5FD  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC603  52                        PUSH EDX
004CC604  50                        PUSH EAX
004CC605  E8 BA 5D F3 FF            CALL 0x004023c4
004CC60A  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC610  6A 00                     PUSH 0x0
004CC612  6A 0E                     PUSH 0xe
004CC614  E8 4B 4A F3 FF            CALL 0x00401064
004CC619  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004CC61E  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004CC624  51                        PUSH ECX
004CC625  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC62B  6A 0E                     PUSH 0xe
004CC62D  E8 0E 8C F3 FF            CALL 0x00405240
004CC632  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC638  6A 01                     PUSH 0x1
004CC63A  E8 43 63 F3 FF            CALL 0x00402982
004CC63F  8B 86 3C 04 00 00         MOV EAX,dword ptr [ESI + 0x43c]
004CC645  83 F8 03                  CMP EAX,0x3
004CC648  74 05                     JZ 0x004cc64f
004CC64A  83 F8 04                  CMP EAX,0x4
004CC64D  75 11                     JNZ 0x004cc660
LAB_004cc64f:
004CC64F  8B 16                     MOV EDX,dword ptr [ESI]
004CC651  68 63 03 00 00            PUSH 0x363
004CC656  6A 03                     PUSH 0x3
004CC658  8B CE                     MOV ECX,ESI
004CC65A  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004cc660:
004CC660  83 BE 3C 04 00 00 02      CMP dword ptr [ESI + 0x43c],0x2
004CC667  75 69                     JNZ 0x004cc6d2
004CC669  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CC66F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CC675  50                        PUSH EAX
004CC676  E8 3C 83 F3 FF            CALL 0x004049b7
004CC67B  8A C8                     MOV CL,AL
004CC67D  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CC683  81 E1 FF 00 00 00         AND ECX,0xff
004CC689  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CC68C  03 CA                     ADD ECX,EDX
004CC68E  8B 04 8D 18 5F 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x795f18]
004CC695  85 C0                     TEST EAX,EAX
004CC697  74 39                     JZ 0x004cc6d2
004CC699  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004CC69F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004CC6A5  8B 3E                     MOV EDI,dword ptr [ESI]
004CC6A7  50                        PUSH EAX
004CC6A8  E8 0A 83 F3 FF            CALL 0x004049b7
004CC6AD  8A C8                     MOV CL,AL
004CC6AF  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004CC6B5  81 E1 FF 00 00 00         AND ECX,0xff
004CC6BB  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004CC6BE  03 CA                     ADD ECX,EDX
004CC6C0  8B 04 8D 18 5F 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x795f18]
004CC6C7  8B CE                     MOV ECX,ESI
004CC6C9  50                        PUSH EAX
004CC6CA  6A 03                     PUSH 0x3
004CC6CC  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
FUN_004cc370::cf_common_exit_004CC6D2:
004CC6D2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CC6D8  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004CC6DE  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CC6E4  52                        PUSH EDX
004CC6E5  E8 C0 6C F3 FF            CALL 0x004033aa
004CC6EA  5F                        POP EDI
004CC6EB  5B                        POP EBX
004CC6EC  33 C0                     XOR EAX,EAX
004CC6EE  5E                        POP ESI
004CC6EF  C3                        RET
LAB_004cc6f0:
004CC6F0  33 C0                     XOR EAX,EAX
004CC6F2  5E                        POP ESI
004CC6F3  C3                        RET
