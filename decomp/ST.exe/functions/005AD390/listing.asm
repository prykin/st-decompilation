FUN_005ad390:
005AD390  55                        PUSH EBP
005AD391  8B EC                     MOV EBP,ESP
005AD393  81 EC AC 00 00 00         SUB ESP,0xac
005AD399  53                        PUSH EBX
005AD39A  56                        PUSH ESI
005AD39B  8B F1                     MOV ESI,ECX
005AD39D  57                        PUSH EDI
005AD39E  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
005AD3A1  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005AD3A8  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
005AD3AE  33 FF                     XOR EDI,EDI
005AD3B0  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005AD3B3  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AD3B8  8D 95 58 FF FF FF         LEA EDX,[EBP + 0xffffff58]
005AD3BE  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
005AD3C4  57                        PUSH EDI
005AD3C5  52                        PUSH EDX
005AD3C6  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
005AD3CC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AD3D2  E8 19 04 18 00            CALL 0x0072d7f0
005AD3D7  8B F0                     MOV ESI,EAX
005AD3D9  83 C4 08                  ADD ESP,0x8
005AD3DC  3B F7                     CMP ESI,EDI
005AD3DE  0F 85 26 08 00 00         JNZ 0x005adc0a
005AD3E4  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005AD3E7  80 7E 65 01               CMP byte ptr [ESI + 0x65],0x1
005AD3EB  75 6D                     JNZ 0x005ad45a
005AD3ED  8B 86 8F 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8f]
005AD3F3  3B C7                     CMP EAX,EDI
005AD3F5  74 63                     JZ 0x005ad45a
005AD3F7  57                        PUSH EDI
005AD3F8  50                        PUSH EAX
005AD3F9  FF 15 E0 BC 85 00         CALL dword ptr [0x0085bce0]
005AD3FF  85 C0                     TEST EAX,EAX
005AD401  75 57                     JNZ 0x005ad45a
005AD403  8B 86 8F 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c8f]
005AD409  50                        PUSH EAX
005AD40A  FF 15 E4 BC 85 00         CALL dword ptr [0x0085bce4]
005AD410  8B 8E 93 1C 00 00         MOV ECX,dword ptr [ESI + 0x1c93]
005AD416  51                        PUSH ECX
005AD417  8B CE                     MOV ECX,ESI
005AD419  E8 EE 66 E5 FF            CALL 0x00403b0c
005AD41E  8B 86 6C 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a6c]
005AD424  C7 46 2D 05 00 00 00      MOV dword ptr [ESI + 0x2d],0x5
005AD42B  3B C7                     CMP EAX,EDI
005AD42D  74 0E                     JZ 0x005ad43d
005AD42F  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005AD432  8B CE                     MOV ECX,ESI
005AD434  52                        PUSH EDX
005AD435  50                        PUSH EAX
005AD436  6A 02                     PUSH 0x2
005AD438  E8 43 8C 13 00            CALL 0x006e6080
LAB_005ad43d:
005AD43D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD442  8B 80 89 03 00 00         MOV EAX,dword ptr [EAX + 0x389]
005AD448  3B C7                     CMP EAX,EDI
005AD44A  74 0E                     JZ 0x005ad45a
005AD44C  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005AD44F  51                        PUSH ECX
005AD450  50                        PUSH EAX
005AD451  6A 02                     PUSH 0x2
005AD453  8B CE                     MOV ECX,ESI
005AD455  E8 26 8C 13 00            CALL 0x006e6080
LAB_005ad45a:
005AD45A  39 BE 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EDI
005AD460  74 27                     JZ 0x005ad489
005AD462  8B 56 61                  MOV EDX,dword ptr [ESI + 0x61]
005AD465  8B 8E 68 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a68]
005AD46B  2B D1                     SUB EDX,ECX
005AD46D  81 FA FA 00 00 00         CMP EDX,0xfa
005AD473  72 14                     JC 0x005ad489
005AD475  8B 86 93 1C 00 00         MOV EAX,dword ptr [ESI + 0x1c93]
005AD47B  8B CE                     MOV ECX,ESI
005AD47D  50                        PUSH EAX
005AD47E  E8 31 6E E5 FF            CALL 0x004042b4
005AD483  89 BE 64 1A 00 00         MOV dword ptr [ESI + 0x1a64],EDI
LAB_005ad489:
005AD489  33 C0                     XOR EAX,EAX
005AD48B  8A 46 65                  MOV AL,byte ptr [ESI + 0x65]
005AD48E  48                        DEC EAX
005AD48F  0F 84 47 05 00 00         JZ 0x005ad9dc
005AD495  83 E8 02                  SUB EAX,0x2
005AD498  0F 84 8F 01 00 00         JZ 0x005ad62d
005AD49E  48                        DEC EAX
005AD49F  0F 85 52 07 00 00         JNZ 0x005adbf7
005AD4A5  8A 86 B5 20 00 00         MOV AL,byte ptr [ESI + 0x20b5]
005AD4AB  84 C0                     TEST AL,AL
005AD4AD  74 4D                     JZ 0x005ad4fc
005AD4AF  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD4B5  8B 81 00 03 00 00         MOV EAX,dword ptr [ECX + 0x300]
005AD4BB  3B C7                     CMP EAX,EDI
005AD4BD  7E 3D                     JLE 0x005ad4fc
005AD4BF  48                        DEC EAX
005AD4C0  89 81 00 03 00 00         MOV dword ptr [ECX + 0x300],EAX
005AD4C6  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD4CC  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005AD4D2  83 F8 FF                  CMP EAX,-0x1
005AD4D5  74 22                     JZ 0x005ad4f9
005AD4D7  8B 91 18 03 00 00         MOV EDX,dword ptr [ECX + 0x318]
005AD4DD  52                        PUSH EDX
005AD4DE  8B 91 14 03 00 00         MOV EDX,dword ptr [ECX + 0x314]
005AD4E4  52                        PUSH EDX
005AD4E5  8B 91 00 03 00 00         MOV EDX,dword ptr [ECX + 0x300]
005AD4EB  52                        PUSH EDX
005AD4EC  50                        PUSH EAX
005AD4ED  8B 81 40 03 00 00         MOV EAX,dword ptr [ECX + 0x340]
005AD4F3  50                        PUSH EAX
005AD4F4  E8 37 62 10 00            CALL 0x006b3730
LAB_005ad4f9:
005AD4F9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad4fc:
005AD4FC  8A 86 B3 20 00 00         MOV AL,byte ptr [ESI + 0x20b3]
005AD502  84 C0                     TEST AL,AL
005AD504  74 32                     JZ 0x005ad538
005AD506  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005AD50C  3B CF                     CMP ECX,EDI
005AD50E  74 28                     JZ 0x005ad538
005AD510  E8 DC 80 E5 FF            CALL 0x004055f1
005AD515  85 C0                     TEST EAX,EAX
005AD517  74 05                     JZ 0x005ad51e
005AD519  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005AD51C  EB 1A                     JMP 0x005ad538
LAB_005ad51e:
005AD51E  8B 86 B8 20 00 00         MOV EAX,dword ptr [ESI + 0x20b8]
005AD524  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AD527  3B C7                     CMP EAX,EDI
005AD529  7C 0D                     JL 0x005ad538
005AD52B  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AD531  50                        PUSH EAX
005AD532  51                        PUSH ECX
005AD533  E8 B8 65 10 00            CALL 0x006b3af0
LAB_005ad538:
005AD538  8A 86 B4 20 00 00         MOV AL,byte ptr [ESI + 0x20b4]
005AD53E  84 C0                     TEST AL,AL
005AD540  74 32                     JZ 0x005ad574
005AD542  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005AD548  3B CF                     CMP ECX,EDI
005AD54A  74 28                     JZ 0x005ad574
005AD54C  E8 A0 80 E5 FF            CALL 0x004055f1
005AD551  85 C0                     TEST EAX,EAX
005AD553  74 05                     JZ 0x005ad55a
005AD555  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005AD558  EB 1A                     JMP 0x005ad574
LAB_005ad55a:
005AD55A  8B 86 BC 20 00 00         MOV EAX,dword ptr [ESI + 0x20bc]
005AD560  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AD563  3B C7                     CMP EAX,EDI
005AD565  7C 0D                     JL 0x005ad574
005AD567  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AD56D  50                        PUSH EAX
005AD56E  52                        PUSH EDX
005AD56F  E8 7C 65 10 00            CALL 0x006b3af0
LAB_005ad574:
005AD574  8A 86 B7 20 00 00         MOV AL,byte ptr [ESI + 0x20b7]
005AD57A  84 C0                     TEST AL,AL
005AD57C  74 31                     JZ 0x005ad5af
005AD57E  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AD584  3B CF                     CMP ECX,EDI
005AD586  74 27                     JZ 0x005ad5af
005AD588  E8 64 80 E5 FF            CALL 0x004055f1
005AD58D  85 C0                     TEST EAX,EAX
005AD58F  74 05                     JZ 0x005ad596
005AD591  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005AD594  EB 19                     JMP 0x005ad5af
LAB_005ad596:
005AD596  8B 86 C0 20 00 00         MOV EAX,dword ptr [ESI + 0x20c0]
005AD59C  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005AD59F  3B C7                     CMP EAX,EDI
005AD5A1  7C 0C                     JL 0x005ad5af
005AD5A3  50                        PUSH EAX
005AD5A4  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005AD5A9  50                        PUSH EAX
005AD5AA  E8 41 65 10 00            CALL 0x006b3af0
LAB_005ad5af:
005AD5AF  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD5B5  8B 81 E6 02 00 00         MOV EAX,dword ptr [ECX + 0x2e6]
005AD5BB  3B C7                     CMP EAX,EDI
005AD5BD  74 09                     JZ 0x005ad5c8
005AD5BF  80 78 65 02               CMP byte ptr [EAX + 0x65],0x2
005AD5C3  74 03                     JZ 0x005ad5c8
005AD5C5  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad5c8:
005AD5C8  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005AD5CB  0F 84 26 06 00 00         JZ 0x005adbf7
005AD5D1  8A 8E 5A 1A 00 00         MOV CL,byte ptr [ESI + 0x1a5a]
005AD5D7  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005AD5DB  80 F9 FF                  CMP CL,0xff
005AD5DE  0F 84 13 06 00 00         JZ 0x005adbf7
005AD5E4  81 E1 FF 00 00 00         AND ECX,0xff
005AD5EA  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
005AD5F1  2B C1                     SUB EAX,ECX
005AD5F3  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005AD5F6  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005AD5F9  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
005AD5FC  03 C1                     ADD EAX,ECX
005AD5FE  39 B8 D1 00 00 00         CMP dword ptr [EAX + 0xd1],EDI
005AD604  0F 84 ED 05 00 00         JZ 0x005adbf7
005AD60A  05 C1 00 00 00            ADD EAX,0xc1
005AD60F  B9 20 76 80 00            MOV ECX,0x807620
005AD614  50                        PUSH EAX
005AD615  E8 36 65 13 00            CALL 0x006e3b50
005AD61A  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
005AD620  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AD626  5F                        POP EDI
005AD627  5E                        POP ESI
005AD628  5B                        POP EBX
005AD629  8B E5                     MOV ESP,EBP
005AD62B  5D                        POP EBP
005AD62C  C3                        RET
LAB_005ad62d:
005AD62D  8A 86 B5 20 00 00         MOV AL,byte ptr [ESI + 0x20b5]
005AD633  84 C0                     TEST AL,AL
005AD635  74 54                     JZ 0x005ad68b
005AD637  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD63D  8B 91 04 03 00 00         MOV EDX,dword ptr [ECX + 0x304]
005AD643  8B 81 00 03 00 00         MOV EAX,dword ptr [ECX + 0x300]
005AD649  4A                        DEC EDX
005AD64A  3B C2                     CMP EAX,EDX
005AD64C  7D 3D                     JGE 0x005ad68b
005AD64E  40                        INC EAX
005AD64F  89 81 00 03 00 00         MOV dword ptr [ECX + 0x300],EAX
005AD655  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD65B  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005AD661  83 F8 FF                  CMP EAX,-0x1
005AD664  74 22                     JZ 0x005ad688
005AD666  8B 91 18 03 00 00         MOV EDX,dword ptr [ECX + 0x318]
005AD66C  52                        PUSH EDX
005AD66D  8B 91 14 03 00 00         MOV EDX,dword ptr [ECX + 0x314]
005AD673  52                        PUSH EDX
005AD674  8B 91 00 03 00 00         MOV EDX,dword ptr [ECX + 0x300]
005AD67A  52                        PUSH EDX
005AD67B  50                        PUSH EAX
005AD67C  8B 81 40 03 00 00         MOV EAX,dword ptr [ECX + 0x340]
005AD682  50                        PUSH EAX
005AD683  E8 A8 60 10 00            CALL 0x006b3730
LAB_005ad688:
005AD688  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad68b:
005AD68B  8A 86 B3 20 00 00         MOV AL,byte ptr [ESI + 0x20b3]
005AD691  84 C0                     TEST AL,AL
005AD693  74 16                     JZ 0x005ad6ab
005AD695  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005AD69B  3B CF                     CMP ECX,EDI
005AD69D  74 0C                     JZ 0x005ad6ab
005AD69F  E8 4D 7F E5 FF            CALL 0x004055f1
005AD6A4  85 C0                     TEST EAX,EAX
005AD6A6  74 03                     JZ 0x005ad6ab
005AD6A8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad6ab:
005AD6AB  8A 86 B4 20 00 00         MOV AL,byte ptr [ESI + 0x20b4]
005AD6B1  84 C0                     TEST AL,AL
005AD6B3  74 16                     JZ 0x005ad6cb
005AD6B5  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005AD6BB  3B CF                     CMP ECX,EDI
005AD6BD  74 0C                     JZ 0x005ad6cb
005AD6BF  E8 2D 7F E5 FF            CALL 0x004055f1
005AD6C4  85 C0                     TEST EAX,EAX
005AD6C6  74 03                     JZ 0x005ad6cb
005AD6C8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad6cb:
005AD6CB  8A 86 B7 20 00 00         MOV AL,byte ptr [ESI + 0x20b7]
005AD6D1  84 C0                     TEST AL,AL
005AD6D3  74 16                     JZ 0x005ad6eb
005AD6D5  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AD6DB  3B CF                     CMP ECX,EDI
005AD6DD  74 0C                     JZ 0x005ad6eb
005AD6DF  E8 0D 7F E5 FF            CALL 0x004055f1
005AD6E4  85 C0                     TEST EAX,EAX
005AD6E6  74 03                     JZ 0x005ad6eb
005AD6E8  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad6eb:
005AD6EB  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD6F1  8B 81 E6 02 00 00         MOV EAX,dword ptr [ECX + 0x2e6]
005AD6F7  3B C7                     CMP EAX,EDI
005AD6F9  74 09                     JZ 0x005ad704
005AD6FB  80 78 65 01               CMP byte ptr [EAX + 0x65],0x1
005AD6FF  74 03                     JZ 0x005ad704
005AD701  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005ad704:
005AD704  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
005AD707  0F 84 EA 04 00 00         JZ 0x005adbf7
005AD70D  8A 86 B3 20 00 00         MOV AL,byte ptr [ESI + 0x20b3]
005AD713  84 C0                     TEST AL,AL
005AD715  74 24                     JZ 0x005ad73b
005AD717  8B 8E B8 20 00 00         MOV ECX,dword ptr [ESI + 0x20b8]
005AD71D  3B CF                     CMP ECX,EDI
005AD71F  74 1A                     JZ 0x005ad73b
005AD721  E8 64 3B E5 FF            CALL 0x0040128a
005AD726  8B 96 B8 20 00 00         MOV EDX,dword ptr [ESI + 0x20b8]
005AD72C  52                        PUSH EDX
005AD72D  E8 7E 0B 18 00            CALL 0x0072e2b0
005AD732  83 C4 04                  ADD ESP,0x4
005AD735  89 BE B8 20 00 00         MOV dword ptr [ESI + 0x20b8],EDI
LAB_005ad73b:
005AD73B  8A 86 B4 20 00 00         MOV AL,byte ptr [ESI + 0x20b4]
005AD741  84 C0                     TEST AL,AL
005AD743  74 24                     JZ 0x005ad769
005AD745  8B 8E BC 20 00 00         MOV ECX,dword ptr [ESI + 0x20bc]
005AD74B  3B CF                     CMP ECX,EDI
005AD74D  74 1A                     JZ 0x005ad769
005AD74F  E8 36 3B E5 FF            CALL 0x0040128a
005AD754  8B 86 BC 20 00 00         MOV EAX,dword ptr [ESI + 0x20bc]
005AD75A  50                        PUSH EAX
005AD75B  E8 50 0B 18 00            CALL 0x0072e2b0
005AD760  83 C4 04                  ADD ESP,0x4
005AD763  89 BE BC 20 00 00         MOV dword ptr [ESI + 0x20bc],EDI
LAB_005ad769:
005AD769  8A 86 B7 20 00 00         MOV AL,byte ptr [ESI + 0x20b7]
005AD76F  84 C0                     TEST AL,AL
005AD771  74 24                     JZ 0x005ad797
005AD773  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AD779  3B CF                     CMP ECX,EDI
005AD77B  74 1A                     JZ 0x005ad797
005AD77D  E8 08 3B E5 FF            CALL 0x0040128a
005AD782  8B 8E C0 20 00 00         MOV ECX,dword ptr [ESI + 0x20c0]
005AD788  51                        PUSH ECX
005AD789  E8 22 0B 18 00            CALL 0x0072e2b0
005AD78E  83 C4 04                  ADD ESP,0x4
005AD791  89 BE C0 20 00 00         MOV dword ptr [ESI + 0x20c0],EDI
LAB_005ad797:
005AD797  8A 86 B5 20 00 00         MOV AL,byte ptr [ESI + 0x20b5]
005AD79D  C6 46 65 01               MOV byte ptr [ESI + 0x65],0x1
005AD7A1  84 C0                     TEST AL,AL
005AD7A3  74 37                     JZ 0x005ad7dc
005AD7A5  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005AD7AB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005AD7B1  8B 82 EC 02 00 00         MOV EAX,dword ptr [EDX + 0x2ec]
005AD7B7  50                        PUSH EAX
005AD7B8  51                        PUSH ECX
005AD7B9  E8 72 5C 10 00            CALL 0x006b3430
005AD7BE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005AD7C4  8B 81 FC 02 00 00         MOV EAX,dword ptr [ECX + 0x2fc]
005AD7CA  83 F8 FF                  CMP EAX,-0x1
005AD7CD  74 0D                     JZ 0x005ad7dc
005AD7CF  8B 91 40 03 00 00         MOV EDX,dword ptr [ECX + 0x340]
005AD7D5  50                        PUSH EAX
005AD7D6  52                        PUSH EDX
005AD7D7  E8 14 63 10 00            CALL 0x006b3af0
LAB_005ad7dc:
005AD7DC  6A 01                     PUSH 0x1
005AD7DE  8B CE                     MOV ECX,ESI
005AD7E0  E8 78 3F E5 FF            CALL 0x0040175d
005AD7E5  8B 86 74 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a74]
005AD7EB  83 F8 FF                  CMP EAX,-0x1
005AD7EE  74 1D                     JZ 0x005ad80d
005AD7F0  8B 8E 90 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a90]
005AD7F6  8B 96 8C 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a8c]
005AD7FC  51                        PUSH ECX
005AD7FD  52                        PUSH EDX
005AD7FE  6A FE                     PUSH -0x2
005AD800  50                        PUSH EAX
005AD801  8B 86 B8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ab8]
005AD807  50                        PUSH EAX
005AD808  E8 C3 5C 10 00            CALL 0x006b34d0
LAB_005ad80d:
005AD80D  8B 86 05 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b05]
005AD813  83 F8 FF                  CMP EAX,-0x1
005AD816  74 1D                     JZ 0x005ad835
005AD818  8B 8E 21 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b21]
005AD81E  8B 96 1D 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b1d]
005AD824  51                        PUSH ECX
005AD825  52                        PUSH EDX
005AD826  6A FE                     PUSH -0x2
005AD828  50                        PUSH EAX
005AD829  8B 86 49 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b49]
005AD82F  50                        PUSH EAX
005AD830  E8 9B 5C 10 00            CALL 0x006b34d0
LAB_005ad835:
005AD835  8B 86 96 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b96]
005AD83B  83 F8 FF                  CMP EAX,-0x1
005AD83E  74 1D                     JZ 0x005ad85d
005AD840  8B 8E B2 1B 00 00         MOV ECX,dword ptr [ESI + 0x1bb2]
005AD846  8B 96 AE 1B 00 00         MOV EDX,dword ptr [ESI + 0x1bae]
005AD84C  51                        PUSH ECX
005AD84D  52                        PUSH EDX
005AD84E  6A FE                     PUSH -0x2
005AD850  50                        PUSH EAX
005AD851  8B 86 DA 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bda]
005AD857  50                        PUSH EAX
005AD858  E8 73 5C 10 00            CALL 0x006b34d0
LAB_005ad85d:
005AD85D  8D BE 23 1C 00 00         LEA EDI,[ESI + 0x1c23]
005AD863  BB 16 00 00 00            MOV EBX,0x16
LAB_005ad868:
005AD868  8B 0F                     MOV ECX,dword ptr [EDI]
005AD86A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AD870  51                        PUSH ECX
005AD871  52                        PUSH EDX
005AD872  E8 B9 5B 10 00            CALL 0x006b3430
005AD877  83 C7 04                  ADD EDI,0x4
005AD87A  4B                        DEC EBX
005AD87B  75 EB                     JNZ 0x005ad868
005AD87D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD882  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005AD888  83 F9 FF                  CMP ECX,-0x1
005AD88B  74 22                     JZ 0x005ad8af
005AD88D  8B 90 AD 03 00 00         MOV EDX,dword ptr [EAX + 0x3ad]
005AD893  52                        PUSH EDX
005AD894  8B 90 A9 03 00 00         MOV EDX,dword ptr [EAX + 0x3a9]
005AD89A  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005AD8A0  52                        PUSH EDX
005AD8A1  6A FE                     PUSH -0x2
005AD8A3  51                        PUSH ECX
005AD8A4  50                        PUSH EAX
005AD8A5  E8 26 5C 10 00            CALL 0x006b34d0
005AD8AA  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ad8af:
005AD8AF  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005AD8B5  83 F9 FF                  CMP ECX,-0x1
005AD8B8  74 22                     JZ 0x005ad8dc
005AD8BA  8B 90 3E 04 00 00         MOV EDX,dword ptr [EAX + 0x43e]
005AD8C0  52                        PUSH EDX
005AD8C1  8B 90 3A 04 00 00         MOV EDX,dword ptr [EAX + 0x43a]
005AD8C7  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005AD8CD  52                        PUSH EDX
005AD8CE  6A FE                     PUSH -0x2
005AD8D0  51                        PUSH ECX
005AD8D1  50                        PUSH EAX
005AD8D2  E8 F9 5B 10 00            CALL 0x006b34d0
005AD8D7  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ad8dc:
005AD8DC  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005AD8E2  83 F9 FF                  CMP ECX,-0x1
005AD8E5  74 22                     JZ 0x005ad909
005AD8E7  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005AD8ED  52                        PUSH EDX
005AD8EE  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005AD8F4  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005AD8FA  52                        PUSH EDX
005AD8FB  6A FE                     PUSH -0x2
005AD8FD  51                        PUSH ECX
005AD8FE  50                        PUSH EAX
005AD8FF  E8 CC 5B 10 00            CALL 0x006b34d0
005AD904  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ad909:
005AD909  8B 88 40 05 00 00         MOV ECX,dword ptr [EAX + 0x540]
005AD90F  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AD915  51                        PUSH ECX
005AD916  52                        PUSH EDX
005AD917  E8 14 5B 10 00            CALL 0x006b3430
005AD91C  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005AD922  3C 0C                     CMP AL,0xc
005AD924  74 10                     JZ 0x005ad936
005AD926  3C 04                     CMP AL,0x4
005AD928  74 0C                     JZ 0x005ad936
005AD92A  3C 05                     CMP AL,0x5
005AD92C  74 08                     JZ 0x005ad936
005AD92E  3C 13                     CMP AL,0x13
005AD930  0F 85 8A 00 00 00         JNZ 0x005ad9c0
LAB_005ad936:
005AD936  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD93B  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005AD941  83 F9 FF                  CMP ECX,-0x1
005AD944  74 22                     JZ 0x005ad968
005AD946  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005AD94C  52                        PUSH EDX
005AD94D  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005AD953  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005AD959  52                        PUSH EDX
005AD95A  6A FE                     PUSH -0x2
005AD95C  51                        PUSH ECX
005AD95D  50                        PUSH EAX
005AD95E  E8 6D 5B 10 00            CALL 0x006b34d0
005AD963  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ad968:
005AD968  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005AD96E  83 F9 FF                  CMP ECX,-0x1
005AD971  74 22                     JZ 0x005ad995
005AD973  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005AD979  52                        PUSH EDX
005AD97A  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005AD980  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005AD986  52                        PUSH EDX
005AD987  6A FE                     PUSH -0x2
005AD989  51                        PUSH ECX
005AD98A  50                        PUSH EAX
005AD98B  E8 40 5B 10 00            CALL 0x006b34d0
005AD990  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ad995:
005AD995  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005AD99B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AD9A1  51                        PUSH ECX
005AD9A2  52                        PUSH EDX
005AD9A3  E8 88 5A 10 00            CALL 0x006b3430
005AD9A8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005AD9AD  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005AD9B3  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005AD9B9  51                        PUSH ECX
005AD9BA  52                        PUSH EDX
005AD9BB  E8 70 5A 10 00            CALL 0x006b3430
LAB_005ad9c0:
005AD9C0  6A 00                     PUSH 0x0
005AD9C2  8B CE                     MOV ECX,ESI
005AD9C4  E8 5C 4D E5 FF            CALL 0x00402725
005AD9C9  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
005AD9CF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AD9D5  5F                        POP EDI
005AD9D6  5E                        POP ESI
005AD9D7  5B                        POP EBX
005AD9D8  8B E5                     MOV ESP,EBP
005AD9DA  5D                        POP EBP
005AD9DB  C3                        RET
LAB_005ad9dc:
005AD9DC  A0 7E 87 80 00            MOV AL,[0x0080877e]
005AD9E1  84 C0                     TEST AL,AL
005AD9E3  0F 84 0E 02 00 00         JZ 0x005adbf7
005AD9E9  33 C0                     XOR EAX,EAX
005AD9EB  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005AD9F1  83 C0 FC                  ADD EAX,-0x4
005AD9F4  83 F8 0F                  CMP EAX,0xf
005AD9F7  0F 87 FA 01 00 00         JA 0x005adbf7
005AD9FD  33 C9                     XOR ECX,ECX
005AD9FF  8A 88 58 DC 5A 00         MOV CL,byte ptr [EAX + 0x5adc58]
switchD_005ada05::switchD:
005ADA05  FF 24 8D 50 DC 5A 00      JMP dword ptr [ECX*0x4 + 0x5adc50]
switchD_005ada05::caseD_4:
005ADA0C  A1 64 17 81 00            MOV EAX,[0x00811764]
005ADA11  57                        PUSH EDI
005ADA12  8D 55 F0                  LEA EDX,[EBP + -0x10]
005ADA15  6A FF                     PUSH -0x1
005ADA17  52                        PUSH EDX
005ADA18  6A FF                     PUSH -0x1
005ADA1A  50                        PUSH EAX
005ADA1B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
005ADA1E  E8 ED 9A 10 00            CALL 0x006b7510
005ADA23  A0 A0 67 80 00            MOV AL,[0x008067a0]
005ADA28  84 C0                     TEST AL,AL
005ADA2A  74 0B                     JZ 0x005ada37
005ADA2C  B9 90 2A 80 00            MOV ECX,0x802a90
005ADA31  FF 15 5C C0 85 00         CALL dword ptr [0x0085c05c]
LAB_005ada37:
005ADA37  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005ADA3A  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
005ADA3D  3B C7                     CMP EAX,EDI
005ADA3F  0F 8E B2 01 00 00         JLE 0x005adbf7
005ADA45  B3 03                     MOV BL,0x3
005ADA47  EB 02                     JMP 0x005ada4b
LAB_005ada49:
005ADA49  33 FF                     XOR EDI,EDI
LAB_005ada4b:
005ADA4B  57                        PUSH EDI
005ADA4C  8D 4D B8                  LEA ECX,[EBP + -0x48]
005ADA4F  6A FF                     PUSH -0x1
005ADA51  8D 55 F8                  LEA EDX,[EBP + -0x8]
005ADA54  51                        PUSH ECX
005ADA55  8D 45 E8                  LEA EAX,[EBP + -0x18]
005ADA58  52                        PUSH EDX
005ADA59  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005ADA5F  8D 4D EC                  LEA ECX,[EBP + -0x14]
005ADA62  50                        PUSH EAX
005ADA63  51                        PUSH ECX
005ADA64  6A FF                     PUSH -0x1
005ADA66  52                        PUSH EDX
005ADA67  E8 C4 7B 16 00            CALL 0x00715630
005ADA6C  83 C4 20                  ADD ESP,0x20
005ADA6F  83 F8 B3                  CMP EAX,-0x4d
005ADA72  0F 84 06 01 00 00         JZ 0x005adb7e
005ADA78  83 F8 01                  CMP EAX,0x1
005ADA7B  0F 85 64 01 00 00         JNZ 0x005adbe5
005ADA81  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005ADA84  83 E8 1A                  SUB EAX,0x1a
005ADA87  74 1B                     JZ 0x005adaa4
005ADA89  48                        DEC EAX
005ADA8A  0F 85 DC 00 00 00         JNZ 0x005adb6c
005ADA90  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005ADA93  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005ADA99  50                        PUSH EAX
005ADA9A  E8 1D 51 E5 FF            CALL 0x00402bbc
005ADA9F  E9 C8 00 00 00            JMP 0x005adb6c
LAB_005adaa4:
005ADAA4  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
005ADAA7  80 7F 02 04               CMP byte ptr [EDI + 0x2],0x4
005ADAAB  0F 85 BB 00 00 00         JNZ 0x005adb6c
005ADAB1  8B 0D D5 7D 80 00         MOV ECX,dword ptr [0x00807dd5]
005ADAB7  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
005ADABD  8B 15 BE 87 80 00         MOV EDX,dword ptr [0x008087be]
005ADAC3  88 5D BE                  MOV byte ptr [EBP + -0x42],BL
005ADAC6  C1 E9 10                  SHR ECX,0x10
005ADAC9  66 89 4D BC               MOV word ptr [EBP + -0x44],CX
005ADACD  33 C9                     XOR ECX,ECX
005ADACF  3C 0C                     CMP AL,0xc
005ADAD1  89 55 BF                  MOV dword ptr [EBP + -0x41],EDX
005ADAD4  8B 15 50 87 80 00         MOV EDX,dword ptr [0x00808750]
005ADADA  0F 95 C1                  SETNZ CL
005ADADD  49                        DEC ECX
005ADADE  25 FF 00 00 00            AND EAX,0xff
005ADAE3  23 CA                     AND ECX,EDX
005ADAE5  8A 15 61 73 80 00         MOV DL,byte ptr [0x00807361]
005ADAEB  83 C0 FC                  ADD EAX,-0x4
005ADAEE  89 4D C3                  MOV dword ptr [EBP + -0x3d],ECX
005ADAF1  83 F8 0F                  CMP EAX,0xf
005ADAF4  88 55 C9                  MOV byte ptr [EBP + -0x37],DL
005ADAF7  77 44                     JA 0x005adb3d
005ADAF9  33 C9                     XOR ECX,ECX
005ADAFB  8A 88 7C DC 5A 00         MOV CL,byte ptr [EAX + 0x5adc7c]
switchD_005adb01::switchD:
005ADB01  FF 24 8D 68 DC 5A 00      JMP dword ptr [ECX*0x4 + 0x5adc68]
switchD_005adb01::caseD_4:
005ADB08  C6 45 C7 02               MOV byte ptr [EBP + -0x39],0x2
005ADB0C  EB 33                     JMP 0x005adb41
switchD_005adb01::caseD_13:
005ADB0E  33 C0                     XOR EAX,EAX
005ADB10  A0 00 34 80 00            MOV AL,[0x00803400]
005ADB15  83 C0 FC                  ADD EAX,-0x4
005ADB18  83 F8 11                  CMP EAX,0x11
005ADB1B  77 24                     JA 0x005adb41
005ADB1D  33 D2                     XOR EDX,EDX
005ADB1F  8A 90 A0 DC 5A 00         MOV DL,byte ptr [EAX + 0x5adca0]
switchD_005adb25::switchD:
005ADB25  FF 24 95 8C DC 5A 00      JMP dword ptr [EDX*0x4 + 0x5adc8c]
switchD_005adb01::caseD_5:
005ADB2C  88 5D C7                  MOV byte ptr [EBP + -0x39],BL
005ADB2F  EB 10                     JMP 0x005adb41
switchD_005adb25::caseD_14:
005ADB31  C6 45 C7 04               MOV byte ptr [EBP + -0x39],0x4
005ADB35  EB 0A                     JMP 0x005adb41
switchD_005adb01::caseD_c:
005ADB37  C6 45 C7 05               MOV byte ptr [EBP + -0x39],0x5
005ADB3B  EB 04                     JMP 0x005adb41
switchD_005adb01::caseD_6:
005ADB3D  C6 45 C7 FF               MOV byte ptr [EBP + -0x39],0xff
switchD_005adb25::caseD_6:
005ADB41  8B 47 22                  MOV EAX,dword ptr [EDI + 0x22]
005ADB44  6A FF                     PUSH -0x1
005ADB46  89 45 DE                  MOV dword ptr [EBP + -0x22],EAX
005ADB49  8B 4F 1E                  MOV ECX,dword ptr [EDI + 0x1e]
005ADB4C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005ADB4F  6A 01                     PUSH 0x1
005ADB51  8D 55 BC                  LEA EDX,[EBP + -0x44]
005ADB54  6A 26                     PUSH 0x26
005ADB56  89 4D DA                  MOV dword ptr [EBP + -0x26],ECX
005ADB59  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005ADB5F  52                        PUSH EDX
005ADB60  6A 1A                     PUSH 0x1a
005ADB62  50                        PUSH EAX
005ADB63  51                        PUSH ECX
005ADB64  E8 F7 77 16 00            CALL 0x00715360
005ADB69  83 C4 1C                  ADD ESP,0x1c
LAB_005adb6c:
005ADB6C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005ADB6F  85 C0                     TEST EAX,EAX
005ADB71  74 72                     JZ 0x005adbe5
005ADB73  8D 55 F8                  LEA EDX,[EBP + -0x8]
005ADB76  52                        PUSH EDX
005ADB77  E8 E4 D4 0F 00            CALL 0x006ab060
005ADB7C  EB 67                     JMP 0x005adbe5
LAB_005adb7e:
005ADB7E  B9 08 00 00 00            MOV ECX,0x8
005ADB83  33 C0                     XOR EAX,EAX
005ADB85  8D 7D 98                  LEA EDI,[EBP + -0x68]
005ADB88  F3 AB                     STOSD.REP ES:EDI
005ADB8A  A0 A0 67 80 00            MOV AL,[0x008067a0]
005ADB8F  F6 D8                     NEG AL
005ADB91  1B C0                     SBB EAX,EAX
005ADB93  83 E0 04                  AND EAX,0x4
005ADB96  05 4D 69 00 00            ADD EAX,0x694d
005ADB9B  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005ADB9E  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005ADBA4  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005ADBAA  85 C9                     TEST ECX,ECX
005ADBAC  74 2D                     JZ 0x005adbdb
005ADBAE  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005ADBB1  6A 00                     PUSH 0x0
005ADBB3  6A 00                     PUSH 0x0
005ADBB5  6A 00                     PUSH 0x0
005ADBB7  8D 55 98                  LEA EDX,[EBP + -0x68]
005ADBBA  6A 00                     PUSH 0x0
005ADBBC  52                        PUSH EDX
005ADBBD  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
005ADBC0  C7 45 A4 02 00 00 00      MOV dword ptr [EBP + -0x5c],0x2
005ADBC7  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005ADBCD  6A 00                     PUSH 0x0
005ADBCF  68 22 25 00 00            PUSH 0x2522
005ADBD4  E8 CF 63 E5 FF            CALL 0x00403fa8
005ADBD9  EB 0A                     JMP 0x005adbe5
LAB_005adbdb:
005ADBDB  8B 06                     MOV EAX,dword ptr [ESI]
005ADBDD  8D 4D 98                  LEA ECX,[EBP + -0x68]
005ADBE0  51                        PUSH ECX
005ADBE1  8B CE                     MOV ECX,ESI
005ADBE3  FF 10                     CALL dword ptr [EAX]
LAB_005adbe5:
005ADBE5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005ADBE8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005ADBEB  40                        INC EAX
005ADBEC  3B C1                     CMP EAX,ECX
005ADBEE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005ADBF1  0F 8C 52 FE FF FF         JL 0x005ada49
switchD_005ada05::caseD_6:
005ADBF7  8B 95 54 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff54]
005ADBFD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005ADC03  5F                        POP EDI
005ADC04  5E                        POP ESI
005ADC05  5B                        POP EBX
005ADC06  8B E5                     MOV ESP,EBP
005ADC08  5D                        POP EBP
005ADC09  C3                        RET
LAB_005adc0a:
005ADC0A  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
005ADC10  68 F0 C7 7C 00            PUSH 0x7cc7f0
005ADC15  68 CC 4C 7A 00            PUSH 0x7a4ccc
005ADC1A  56                        PUSH ESI
005ADC1B  57                        PUSH EDI
005ADC1C  68 4E 02 00 00            PUSH 0x24e
005ADC21  68 28 C7 7C 00            PUSH 0x7cc728
005ADC26  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005ADC2B  E8 A0 F8 0F 00            CALL 0x006ad4d0
005ADC30  83 C4 18                  ADD ESP,0x18
005ADC33  85 C0                     TEST EAX,EAX
005ADC35  74 01                     JZ 0x005adc38
005ADC37  CC                        INT3
LAB_005adc38:
005ADC38  68 4E 02 00 00            PUSH 0x24e
005ADC3D  68 28 C7 7C 00            PUSH 0x7cc728
005ADC42  57                        PUSH EDI
005ADC43  56                        PUSH ESI
005ADC44  E8 F7 81 0F 00            CALL 0x006a5e40
005ADC49  5F                        POP EDI
005ADC4A  5E                        POP ESI
005ADC4B  5B                        POP EBX
005ADC4C  8B E5                     MOV ESP,EBP
005ADC4E  5D                        POP EBP
005ADC4F  C3                        RET
