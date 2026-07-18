FUN_006fd430:
006FD430  55                        PUSH EBP
006FD431  8B EC                     MOV EBP,ESP
006FD433  83 EC 18                  SUB ESP,0x18
006FD436  8B 45 40                  MOV EAX,dword ptr [EBP + 0x40]
006FD439  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FD43C  C1 F8 03                  SAR EAX,0x3
006FD43F  03 C8                     ADD ECX,EAX
006FD441  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FD444  48                        DEC EAX
006FD445  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006FD44F  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006FD452  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FD455  0F 88 EC 07 00 00         JS 0x006fdc47
006FD45B  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006FD45E  53                        PUSH EBX
006FD45F  56                        PUSH ESI
006FD460  57                        PUSH EDI
006FD461  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006FD464  EB 03                     JMP 0x006fd469
LAB_006fd466:
006FD466  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
LAB_006fd469:
006FD469  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FD46C  F6 C2 01                  TEST DL,0x1
006FD46F  75 4E                     JNZ 0x006fd4bf
LAB_006fd471:
006FD471  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FD474  48                        DEC EAX
006FD475  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FD478  78 42                     JS 0x006fd4bc
006FD47A  33 C0                     XOR EAX,EAX
006FD47C  8A 06                     MOV AL,byte ptr [ESI]
006FD47E  46                        INC ESI
006FD47F  85 C0                     TEST EAX,EAX
006FD481  74 2C                     JZ 0x006fd4af
006FD483  8B CF                     MOV ECX,EDI
LAB_006fd485:
006FD485  A8 80                     TEST AL,0x80
006FD487  74 16                     JZ 0x006fd49f
006FD489  A8 40                     TEST AL,0x40
006FD48B  74 06                     JZ 0x006fd493
006FD48D  46                        INC ESI
006FD48E  83 E0 3F                  AND EAX,0x3f
006FD491  EB 0F                     JMP 0x006fd4a2
LAB_006fd493:
006FD493  8B D8                     MOV EBX,EAX
006FD495  83 E3 3F                  AND EBX,0x3f
006FD498  03 F3                     ADD ESI,EBX
006FD49A  83 E0 3F                  AND EAX,0x3f
006FD49D  EB 03                     JMP 0x006fd4a2
LAB_006fd49f:
006FD49F  83 E0 7F                  AND EAX,0x7f
LAB_006fd4a2:
006FD4A2  2B C8                     SUB ECX,EAX
006FD4A4  85 C9                     TEST ECX,ECX
006FD4A6  7E 07                     JLE 0x006fd4af
006FD4A8  33 C0                     XOR EAX,EAX
006FD4AA  8A 06                     MOV AL,byte ptr [ESI]
006FD4AC  46                        INC ESI
006FD4AD  EB D6                     JMP 0x006fd485
LAB_006fd4af:
006FD4AF  42                        INC EDX
006FD4B0  83 FA 04                  CMP EDX,0x4
006FD4B3  7E 02                     JLE 0x006fd4b7
006FD4B5  33 D2                     XOR EDX,EDX
LAB_006fd4b7:
006FD4B7  F6 C2 01                  TEST DL,0x1
006FD4BA  74 B5                     JZ 0x006fd471
LAB_006fd4bc:
006FD4BC  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006fd4bf:
006FD4BF  33 DB                     XOR EBX,EBX
006FD4C1  8A 1E                     MOV BL,byte ptr [ESI]
006FD4C3  46                        INC ESI
006FD4C4  85 DB                     TEST EBX,EBX
006FD4C6  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FD4C9  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD4CC  0F 84 2B 07 00 00         JZ 0x006fdbfd
006FD4D2  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006FD4D5  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006FD4D8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006FD4DB  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006FD4DE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006FD4E1  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006FD4E4  83 E1 07                  AND ECX,0x7
006FD4E7  BA 80 00 00 00            MOV EDX,0x80
006FD4EC  D3 FA                     SAR EDX,CL
006FD4EE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006FD4F1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FD4F4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FD4F7  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
LAB_006fd4fa:
006FD4FA  F6 C3 80                  TEST BL,0x80
006FD4FD  8B C3                     MOV EAX,EBX
006FD4FF  74 36                     JZ 0x006fd537
006FD501  83 E0 3F                  AND EAX,0x3f
006FD504  3B C6                     CMP EAX,ESI
006FD506  7F 45                     JG 0x006fd54d
006FD508  F6 C3 40                  TEST BL,0x40
006FD50B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FD50E  74 13                     JZ 0x006fd523
006FD510  43                        INC EBX
006FD511  2B F0                     SUB ESI,EAX
006FD513  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FD516  33 DB                     XOR EBX,EBX
006FD518  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FD51B  8A 18                     MOV BL,byte ptr [EAX]
006FD51D  40                        INC EAX
006FD51E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FD521  EB D7                     JMP 0x006fd4fa
LAB_006fd523:
006FD523  03 D8                     ADD EBX,EAX
006FD525  2B F0                     SUB ESI,EAX
006FD527  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FD52A  33 DB                     XOR EBX,EBX
006FD52C  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FD52F  8A 18                     MOV BL,byte ptr [EAX]
006FD531  40                        INC EAX
006FD532  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FD535  EB C3                     JMP 0x006fd4fa
LAB_006fd537:
006FD537  83 E0 7F                  AND EAX,0x7f
006FD53A  3B C6                     CMP EAX,ESI
006FD53C  7F 0F                     JG 0x006fd54d
006FD53E  2B F0                     SUB ESI,EAX
006FD540  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006FD543  33 DB                     XOR EBX,EBX
006FD545  8A 18                     MOV BL,byte ptr [EAX]
006FD547  40                        INC EAX
006FD548  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006FD54B  EB AD                     JMP 0x006fd4fa
LAB_006fd54d:
006FD54D  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006FD550  81 E3 C0 00 00 00         AND EBX,0xc0
006FD556  2B C6                     SUB EAX,ESI
006FD558  80 FB 80                  CMP BL,0x80
006FD55B  75 03                     JNZ 0x006fd560
006FD55D  01 75 1C                  ADD dword ptr [EBP + 0x1c],ESI
LAB_006fd560:
006FD560  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006FD563  3B C6                     CMP EAX,ESI
006FD565  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
006FD568  0F 8F 5B 04 00 00         JG 0x006fd9c9
006FD56E  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006FD571  81 E6 80 00 00 00         AND ESI,0x80
LAB_006fd577:
006FD577  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006FD57A  2B D8                     SUB EBX,EAX
006FD57C  85 F6                     TEST ESI,ESI
006FD57E  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006FD581  0F 84 F5 03 00 00         JZ 0x006fd97c
006FD587  F6 45 EC 40               TEST byte ptr [EBP + -0x14],0x40
006FD58B  0F 84 CF 01 00 00         JZ 0x006fd760
006FD591  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FD594  33 DB                     XOR EBX,EBX
006FD596  8A 1E                     MOV BL,byte ptr [ESI]
006FD598  46                        INC ESI
006FD599  85 C9                     TEST ECX,ECX
006FD59B  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FD59E  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD5A1  0F 8E E2 00 00 00         JLE 0x006fd689
006FD5A7  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FD5AA  83 FE 03                  CMP ESI,0x3
006FD5AD  0F 87 D6 00 00 00         JA 0x006fd689
switchD_006fd5b3::switchD:
006FD5B3  FF 24 B5 54 DE 6F 00      JMP dword ptr [ESI*0x4 + 0x6fde54]
switchD_006fd5b3::caseD_1:
006FD5BA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD5BD  84 11                     TEST byte ptr [ECX],DL
006FD5BF  75 11                     JNZ 0x006fd5d2
006FD5C1  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD5C4  33 C9                     XOR ECX,ECX
006FD5C6  66 8B 0E                  MOV CX,word ptr [ESI]
006FD5C9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD5CC  3B F1                     CMP ESI,ECX
006FD5CE  77 32                     JA 0x006fd602
006FD5D0  88 1F                     MOV byte ptr [EDI],BL
LAB_006fd5d2:
006FD5D2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fd5d5:
006FD5D5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD5D8  B9 02 00 00 00            MOV ECX,0x2
006FD5DD  03 D9                     ADD EBX,ECX
006FD5DF  47                        INC EDI
006FD5E0  46                        INC ESI
006FD5E1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD5E4  D1 EA                     SHR EDX,0x1
006FD5E6  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD5E9  75 0C                     JNZ 0x006fd5f7
006FD5EB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FD5EE  BA 80 00 00 00            MOV EDX,0x80
006FD5F3  43                        INC EBX
006FD5F4  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fd5f7:
006FD5F7  48                        DEC EAX
006FD5F8  85 C0                     TEST EAX,EAX
006FD5FA  0F 8E 56 03 00 00         JLE 0x006fd956
006FD600  EB 14                     JMP 0x006fd616
LAB_006fd602:
006FD602  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD605  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD608  33 C9                     XOR ECX,ECX
006FD60A  8A 0E                     MOV CL,byte ptr [ESI]
006FD60C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FD60F  88 0F                     MOV byte ptr [EDI],CL
006FD611  EB C2                     JMP 0x006fd5d5
switchD_006fd5b3::caseD_2:
006FD613  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fd616:
006FD616  48                        DEC EAX
006FD617  B9 03 00 00 00            MOV ECX,0x3
006FD61C  85 C0                     TEST EAX,EAX
006FD61E  0F 8E 32 03 00 00         JLE 0x006fd956
006FD624  EB 03                     JMP 0x006fd629
switchD_006fd5b3::caseD_3:
006FD626  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fd629:
006FD629  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD62C  84 11                     TEST byte ptr [ECX],DL
006FD62E  75 20                     JNZ 0x006fd650
006FD630  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD633  33 C9                     XOR ECX,ECX
006FD635  66 8B 0B                  MOV CX,word ptr [EBX]
006FD638  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD63B  3B D9                     CMP EBX,ECX
006FD63D  77 05                     JA 0x006fd644
006FD63F  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FD642  EB 0A                     JMP 0x006fd64e
LAB_006fd644:
006FD644  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD647  33 C9                     XOR ECX,ECX
006FD649  8A 0E                     MOV CL,byte ptr [ESI]
006FD64B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fd64e:
006FD64E  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd650:
006FD650  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD653  83 C3 02                  ADD EBX,0x2
006FD656  47                        INC EDI
006FD657  46                        INC ESI
006FD658  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD65B  D1 EA                     SHR EDX,0x1
006FD65D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD660  75 0C                     JNZ 0x006fd66e
006FD662  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD665  BA 80 00 00 00            MOV EDX,0x80
006FD66A  41                        INC ECX
006FD66B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd66e:
006FD66E  48                        DEC EAX
006FD66F  B9 04 00 00 00            MOV ECX,0x4
006FD674  85 C0                     TEST EAX,EAX
006FD676  0F 8E DA 02 00 00         JLE 0x006fd956
006FD67C  33 C9                     XOR ECX,ECX
006FD67E  48                        DEC EAX
006FD67F  EB 0B                     JMP 0x006fd68c
switchD_006fd5b3::caseD_4:
006FD681  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD684  33 C9                     XOR ECX,ECX
006FD686  48                        DEC EAX
006FD687  EB 03                     JMP 0x006fd68c
LAB_006fd689:
006FD689  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
switchD_006fd5b3::default:
006FD68C  85 C0                     TEST EAX,EAX
006FD68E  0F 8E C2 02 00 00         JLE 0x006fd956
006FD694  48                        DEC EAX
006FD695  B9 01 00 00 00            MOV ECX,0x1
006FD69A  85 C0                     TEST EAX,EAX
006FD69C  0F 8E B4 02 00 00         JLE 0x006fd956
LAB_006fd6a2:
006FD6A2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD6A5  84 11                     TEST byte ptr [ECX],DL
006FD6A7  75 20                     JNZ 0x006fd6c9
006FD6A9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD6AC  33 C9                     XOR ECX,ECX
006FD6AE  66 8B 0B                  MOV CX,word ptr [EBX]
006FD6B1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD6B4  3B D9                     CMP EBX,ECX
006FD6B6  77 05                     JA 0x006fd6bd
006FD6B8  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FD6BB  EB 0A                     JMP 0x006fd6c7
LAB_006fd6bd:
006FD6BD  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD6C0  33 C9                     XOR ECX,ECX
006FD6C2  8A 0E                     MOV CL,byte ptr [ESI]
006FD6C4  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fd6c7:
006FD6C7  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd6c9:
006FD6C9  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD6CC  B9 02 00 00 00            MOV ECX,0x2
006FD6D1  03 D9                     ADD EBX,ECX
006FD6D3  47                        INC EDI
006FD6D4  46                        INC ESI
006FD6D5  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD6D8  D1 EA                     SHR EDX,0x1
006FD6DA  75 0C                     JNZ 0x006fd6e8
006FD6DC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FD6DF  BA 80 00 00 00            MOV EDX,0x80
006FD6E4  43                        INC EBX
006FD6E5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fd6e8:
006FD6E8  48                        DEC EAX
006FD6E9  85 C0                     TEST EAX,EAX
006FD6EB  7E 6B                     JLE 0x006fd758
006FD6ED  48                        DEC EAX
006FD6EE  B9 03 00 00 00            MOV ECX,0x3
006FD6F3  85 C0                     TEST EAX,EAX
006FD6F5  7E 61                     JLE 0x006fd758
006FD6F7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD6FA  84 11                     TEST byte ptr [ECX],DL
006FD6FC  75 20                     JNZ 0x006fd71e
006FD6FE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD701  33 C9                     XOR ECX,ECX
006FD703  66 8B 0B                  MOV CX,word ptr [EBX]
006FD706  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD709  3B D9                     CMP EBX,ECX
006FD70B  77 05                     JA 0x006fd712
006FD70D  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FD710  EB 0A                     JMP 0x006fd71c
LAB_006fd712:
006FD712  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD715  33 C9                     XOR ECX,ECX
006FD717  8A 0E                     MOV CL,byte ptr [ESI]
006FD719  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fd71c:
006FD71C  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd71e:
006FD71E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD721  83 C3 02                  ADD EBX,0x2
006FD724  47                        INC EDI
006FD725  46                        INC ESI
006FD726  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD729  D1 EA                     SHR EDX,0x1
006FD72B  75 0C                     JNZ 0x006fd739
006FD72D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD730  BA 80 00 00 00            MOV EDX,0x80
006FD735  41                        INC ECX
006FD736  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd739:
006FD739  48                        DEC EAX
006FD73A  B9 04 00 00 00            MOV ECX,0x4
006FD73F  85 C0                     TEST EAX,EAX
006FD741  7E 15                     JLE 0x006fd758
006FD743  33 C9                     XOR ECX,ECX
006FD745  48                        DEC EAX
006FD746  85 C0                     TEST EAX,EAX
006FD748  7E 0E                     JLE 0x006fd758
006FD74A  48                        DEC EAX
006FD74B  B9 01 00 00 00            MOV ECX,0x1
006FD750  85 C0                     TEST EAX,EAX
006FD752  0F 8F 4A FF FF FF         JG 0x006fd6a2
LAB_006fd758:
006FD758  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FD75B  E9 F6 01 00 00            JMP 0x006fd956
LAB_006fd760:
006FD760  85 C9                     TEST ECX,ECX
006FD762  0F 8E 03 01 00 00         JLE 0x006fd86b
006FD768  8D 71 FF                  LEA ESI,[ECX + -0x1]
006FD76B  83 FE 03                  CMP ESI,0x3
006FD76E  0F 87 F7 00 00 00         JA 0x006fd86b
switchD_006fd774::switchD:
006FD774  FF 24 B5 64 DE 6F 00      JMP dword ptr [ESI*0x4 + 0x6fde64]
switchD_006fd774::caseD_1:
006FD77B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD77E  84 11                     TEST byte ptr [ECX],DL
006FD780  75 27                     JNZ 0x006fd7a9
006FD782  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FD785  33 C9                     XOR ECX,ECX
006FD787  66 8B 0E                  MOV CX,word ptr [ESI]
006FD78A  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FD78D  3B F1                     CMP ESI,ECX
006FD78F  77 09                     JA 0x006fd79a
006FD791  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FD794  8A 0E                     MOV CL,byte ptr [ESI]
006FD796  88 0F                     MOV byte ptr [EDI],CL
006FD798  EB 12                     JMP 0x006fd7ac
LAB_006fd79a:
006FD79A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FD79D  33 C9                     XOR ECX,ECX
006FD79F  8A 0E                     MOV CL,byte ptr [ESI]
006FD7A1  8B 75 4C                  MOV ESI,dword ptr [EBP + 0x4c]
006FD7A4  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
006FD7A7  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd7a9:
006FD7A9  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006fd7ac:
006FD7AC  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD7AF  B9 02 00 00 00            MOV ECX,0x2
006FD7B4  03 D9                     ADD EBX,ECX
006FD7B6  47                        INC EDI
006FD7B7  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD7BA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD7BD  43                        INC EBX
006FD7BE  D1 EA                     SHR EDX,0x1
006FD7C0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD7C3  75 0C                     JNZ 0x006fd7d1
006FD7C5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FD7C8  BA 80 00 00 00            MOV EDX,0x80
006FD7CD  43                        INC EBX
006FD7CE  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fd7d1:
006FD7D1  46                        INC ESI
006FD7D2  48                        DEC EAX
006FD7D3  85 C0                     TEST EAX,EAX
006FD7D5  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD7D8  0F 8E 78 01 00 00         JLE 0x006fd956
006FD7DE  EB 03                     JMP 0x006fd7e3
switchD_006fd774::caseD_2:
006FD7E0  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006fd7e3:
006FD7E3  46                        INC ESI
006FD7E4  48                        DEC EAX
006FD7E5  85 C0                     TEST EAX,EAX
006FD7E7  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD7EA  B9 03 00 00 00            MOV ECX,0x3
006FD7EF  0F 8E 61 01 00 00         JLE 0x006fd956
006FD7F5  EB 03                     JMP 0x006fd7fa
switchD_006fd774::caseD_3:
006FD7F7  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006fd7fa:
006FD7FA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD7FD  84 11                     TEST byte ptr [ECX],DL
006FD7FF  75 22                     JNZ 0x006fd823
006FD801  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD804  33 C9                     XOR ECX,ECX
006FD806  66 8B 0B                  MOV CX,word ptr [EBX]
006FD809  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD80C  3B D9                     CMP EBX,ECX
006FD80E  77 04                     JA 0x006fd814
006FD810  8A 0E                     MOV CL,byte ptr [ESI]
006FD812  EB 0D                     JMP 0x006fd821
LAB_006fd814:
006FD814  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD817  33 C9                     XOR ECX,ECX
006FD819  8A 0B                     MOV CL,byte ptr [EBX]
006FD81B  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD81E  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fd821:
006FD821  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd823:
006FD823  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD826  83 C3 02                  ADD EBX,0x2
006FD829  47                        INC EDI
006FD82A  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD82D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD830  43                        INC EBX
006FD831  D1 EA                     SHR EDX,0x1
006FD833  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD836  75 0C                     JNZ 0x006fd844
006FD838  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD83B  BA 80 00 00 00            MOV EDX,0x80
006FD840  41                        INC ECX
006FD841  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd844:
006FD844  46                        INC ESI
006FD845  48                        DEC EAX
006FD846  85 C0                     TEST EAX,EAX
006FD848  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD84B  B9 04 00 00 00            MOV ECX,0x4
006FD850  0F 8E 00 01 00 00         JLE 0x006fd956
006FD856  46                        INC ESI
006FD857  33 C9                     XOR ECX,ECX
006FD859  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD85C  48                        DEC EAX
006FD85D  EB 0F                     JMP 0x006fd86e
switchD_006fd774::caseD_4:
006FD85F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FD862  33 C9                     XOR ECX,ECX
006FD864  46                        INC ESI
006FD865  48                        DEC EAX
006FD866  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD869  EB 03                     JMP 0x006fd86e
LAB_006fd86b:
006FD86B  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
switchD_006fd774::default:
006FD86E  85 C0                     TEST EAX,EAX
006FD870  0F 8E E0 00 00 00         JLE 0x006fd956
006FD876  46                        INC ESI
006FD877  48                        DEC EAX
006FD878  85 C0                     TEST EAX,EAX
006FD87A  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD87D  B9 01 00 00 00            MOV ECX,0x1
006FD882  0F 8E CE 00 00 00         JLE 0x006fd956
LAB_006fd888:
006FD888  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD88B  84 11                     TEST byte ptr [ECX],DL
006FD88D  75 22                     JNZ 0x006fd8b1
006FD88F  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD892  33 C9                     XOR ECX,ECX
006FD894  66 8B 0B                  MOV CX,word ptr [EBX]
006FD897  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD89A  3B D9                     CMP EBX,ECX
006FD89C  77 04                     JA 0x006fd8a2
006FD89E  8A 0E                     MOV CL,byte ptr [ESI]
006FD8A0  EB 0D                     JMP 0x006fd8af
LAB_006fd8a2:
006FD8A2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD8A5  33 C9                     XOR ECX,ECX
006FD8A7  8A 0B                     MOV CL,byte ptr [EBX]
006FD8A9  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD8AC  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fd8af:
006FD8AF  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd8b1:
006FD8B1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD8B4  B9 02 00 00 00            MOV ECX,0x2
006FD8B9  03 D9                     ADD EBX,ECX
006FD8BB  47                        INC EDI
006FD8BC  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD8BF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD8C2  43                        INC EBX
006FD8C3  D1 EA                     SHR EDX,0x1
006FD8C5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD8C8  75 0C                     JNZ 0x006fd8d6
006FD8CA  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FD8CD  BA 80 00 00 00            MOV EDX,0x80
006FD8D2  43                        INC EBX
006FD8D3  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fd8d6:
006FD8D6  46                        INC ESI
006FD8D7  48                        DEC EAX
006FD8D8  85 C0                     TEST EAX,EAX
006FD8DA  7E 77                     JLE 0x006fd953
006FD8DC  46                        INC ESI
006FD8DD  48                        DEC EAX
006FD8DE  85 C0                     TEST EAX,EAX
006FD8E0  B9 03 00 00 00            MOV ECX,0x3
006FD8E5  7E 6C                     JLE 0x006fd953
006FD8E7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD8EA  84 11                     TEST byte ptr [ECX],DL
006FD8EC  75 22                     JNZ 0x006fd910
006FD8EE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD8F1  33 C9                     XOR ECX,ECX
006FD8F3  66 8B 0B                  MOV CX,word ptr [EBX]
006FD8F6  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FD8F9  3B D9                     CMP EBX,ECX
006FD8FB  77 04                     JA 0x006fd901
006FD8FD  8A 0E                     MOV CL,byte ptr [ESI]
006FD8FF  EB 0D                     JMP 0x006fd90e
LAB_006fd901:
006FD901  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD904  33 C9                     XOR ECX,ECX
006FD906  8A 0B                     MOV CL,byte ptr [EBX]
006FD908  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FD90B  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fd90e:
006FD90E  88 0F                     MOV byte ptr [EDI],CL
LAB_006fd910:
006FD910  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD913  83 C3 02                  ADD EBX,0x2
006FD916  47                        INC EDI
006FD917  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD91A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FD91D  43                        INC EBX
006FD91E  D1 EA                     SHR EDX,0x1
006FD920  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FD923  75 0C                     JNZ 0x006fd931
006FD925  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FD928  BA 80 00 00 00            MOV EDX,0x80
006FD92D  41                        INC ECX
006FD92E  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fd931:
006FD931  46                        INC ESI
006FD932  48                        DEC EAX
006FD933  85 C0                     TEST EAX,EAX
006FD935  B9 04 00 00 00            MOV ECX,0x4
006FD93A  7E 17                     JLE 0x006fd953
006FD93C  46                        INC ESI
006FD93D  33 C9                     XOR ECX,ECX
006FD93F  48                        DEC EAX
006FD940  85 C0                     TEST EAX,EAX
006FD942  7E 0F                     JLE 0x006fd953
006FD944  46                        INC ESI
006FD945  48                        DEC EAX
006FD946  85 C0                     TEST EAX,EAX
006FD948  B9 01 00 00 00            MOV ECX,0x1
006FD94D  0F 8F 35 FF FF FF         JG 0x006fd888
LAB_006fd953:
006FD953  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fd956:
006FD956  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006FD959  85 C0                     TEST EAX,EAX
006FD95B  7E 6A                     JLE 0x006fd9c7
006FD95D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FD960  33 C0                     XOR EAX,EAX
006FD962  8A 03                     MOV AL,byte ptr [EBX]
006FD964  8B F0                     MOV ESI,EAX
006FD966  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006FD969  81 E6 80 00 00 00         AND ESI,0x80
006FD96F  43                        INC EBX
006FD970  85 F6                     TEST ESI,ESI
006FD972  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FD975  74 42                     JZ 0x006fd9b9
006FD977  83 E0 3F                  AND EAX,0x3f
006FD97A  EB 40                     JMP 0x006fd9bc
LAB_006fd97c:
006FD97C  48                        DEC EAX
006FD97D  78 D7                     JS 0x006fd956
006FD97F  8D 70 01                  LEA ESI,[EAX + 0x1]
LAB_006fd982:
006FD982  8B C1                     MOV EAX,ECX
006FD984  83 E0 01                  AND EAX,0x1
006FD987  3C 01                     CMP AL,0x1
006FD989  75 21                     JNZ 0x006fd9ac
006FD98B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006FD98E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FD991  47                        INC EDI
006FD992  40                        INC EAX
006FD993  83 C3 02                  ADD EBX,0x2
006FD996  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006FD999  D1 EA                     SHR EDX,0x1
006FD99B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FD99E  75 0C                     JNZ 0x006fd9ac
006FD9A0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006FD9A3  BA 80 00 00 00            MOV EDX,0x80
006FD9A8  40                        INC EAX
006FD9A9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_006fd9ac:
006FD9AC  41                        INC ECX
006FD9AD  83 F9 04                  CMP ECX,0x4
006FD9B0  7E 02                     JLE 0x006fd9b4
006FD9B2  33 C9                     XOR ECX,ECX
LAB_006fd9b4:
006FD9B4  4E                        DEC ESI
006FD9B5  75 CB                     JNZ 0x006fd982
006FD9B7  EB 9D                     JMP 0x006fd956
LAB_006fd9b9:
006FD9B9  83 E0 7F                  AND EAX,0x7f
LAB_006fd9bc:
006FD9BC  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006FD9BF  0F 8E B2 FB FF FF         JLE 0x006fd577
006FD9C5  EB 02                     JMP 0x006fd9c9
LAB_006fd9c7:
006FD9C7  33 C0                     XOR EAX,EAX
LAB_006fd9c9:
006FD9C9  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FD9CC  2B C6                     SUB EAX,ESI
006FD9CE  85 F6                     TEST ESI,ESI
006FD9D0  0F 8E CF 01 00 00         JLE 0x006fdba5
006FD9D6  8A 5D EC                  MOV BL,byte ptr [EBP + -0x14]
006FD9D9  F6 C3 80                  TEST BL,0x80
006FD9DC  0F 84 C3 01 00 00         JZ 0x006fdba5
006FD9E2  F6 C3 40                  TEST BL,0x40
006FD9E5  0F 84 62 02 00 00         JZ 0x006fdc4d
006FD9EB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FD9EE  33 DB                     XOR EBX,EBX
006FD9F0  8A 1E                     MOV BL,byte ptr [ESI]
006FD9F2  46                        INC ESI
006FD9F3  85 C9                     TEST ECX,ECX
006FD9F5  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006FD9F8  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
006FD9FB  0F 8E E0 00 00 00         JLE 0x006fdae1
006FDA01  49                        DEC ECX
006FDA02  83 F9 03                  CMP ECX,0x3
006FDA05  0F 87 D6 00 00 00         JA 0x006fdae1
switchD_006fda0b::switchD:
006FDA0B  FF 24 8D 74 DE 6F 00      JMP dword ptr [ECX*0x4 + 0x6fde74]
switchD_006fda0b::caseD_1:
006FDA12  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDA15  84 11                     TEST byte ptr [ECX],DL
006FDA17  75 11                     JNZ 0x006fda2a
006FDA19  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FDA1C  33 C9                     XOR ECX,ECX
006FDA1E  66 8B 0E                  MOV CX,word ptr [ESI]
006FDA21  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FDA24  3B F1                     CMP ESI,ECX
006FDA26  77 31                     JA 0x006fda59
006FDA28  88 1F                     MOV byte ptr [EDI],BL
LAB_006fda2a:
006FDA2A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fda2d:
006FDA2D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDA30  83 C3 02                  ADD EBX,0x2
006FDA33  47                        INC EDI
006FDA34  46                        INC ESI
006FDA35  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDA38  D1 EA                     SHR EDX,0x1
006FDA3A  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FDA3D  75 0C                     JNZ 0x006fda4b
006FDA3F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDA42  BA 80 00 00 00            MOV EDX,0x80
006FDA47  41                        INC ECX
006FDA48  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fda4b:
006FDA4B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FDA4E  49                        DEC ECX
006FDA4F  85 C9                     TEST ECX,ECX
006FDA51  0F 8E 4E 01 00 00         JLE 0x006fdba5
006FDA57  EB 17                     JMP 0x006fda70
LAB_006fda59:
006FDA59  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FDA5C  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDA5F  33 C9                     XOR ECX,ECX
006FDA61  8A 0E                     MOV CL,byte ptr [ESI]
006FDA63  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
006FDA66  88 0F                     MOV byte ptr [EDI],CL
006FDA68  EB C3                     JMP 0x006fda2d
switchD_006fda0b::caseD_2:
006FDA6A  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FDA6D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fda70:
006FDA70  49                        DEC ECX
006FDA71  85 C9                     TEST ECX,ECX
006FDA73  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FDA76  0F 8E 29 01 00 00         JLE 0x006fdba5
006FDA7C  EB 06                     JMP 0x006fda84
switchD_006fda0b::caseD_3:
006FDA7E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FDA81  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006fda84:
006FDA84  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FDA87  84 13                     TEST byte ptr [EBX],DL
006FDA89  75 23                     JNZ 0x006fdaae
006FDA8B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDA8E  33 C9                     XOR ECX,ECX
006FDA90  66 8B 0B                  MOV CX,word ptr [EBX]
006FDA93  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FDA96  3B D9                     CMP EBX,ECX
006FDA98  77 05                     JA 0x006fda9f
006FDA9A  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FDA9D  EB 0A                     JMP 0x006fdaa9
LAB_006fda9f:
006FDA9F  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDAA2  33 C9                     XOR ECX,ECX
006FDAA4  8A 0E                     MOV CL,byte ptr [ESI]
006FDAA6  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fdaa9:
006FDAA9  88 0F                     MOV byte ptr [EDI],CL
006FDAAB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fdaae:
006FDAAE  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDAB1  83 C3 02                  ADD EBX,0x2
006FDAB4  47                        INC EDI
006FDAB5  46                        INC ESI
006FDAB6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDAB9  D1 EA                     SHR EDX,0x1
006FDABB  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FDABE  75 0C                     JNZ 0x006fdacc
006FDAC0  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FDAC3  BA 80 00 00 00            MOV EDX,0x80
006FDAC8  43                        INC EBX
006FDAC9  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fdacc:
006FDACC  49                        DEC ECX
006FDACD  85 C9                     TEST ECX,ECX
006FDACF  0F 8E D0 00 00 00         JLE 0x006fdba5
006FDAD5  49                        DEC ECX
006FDAD6  EB 0F                     JMP 0x006fdae7
switchD_006fda0b::caseD_4:
006FDAD8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FDADB  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FDADE  49                        DEC ECX
006FDADF  EB 06                     JMP 0x006fdae7
LAB_006fdae1:
006FDAE1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006FDAE4  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
switchD_006fda0b::default:
006FDAE7  85 C9                     TEST ECX,ECX
006FDAE9  0F 8E B6 00 00 00         JLE 0x006fdba5
006FDAEF  49                        DEC ECX
006FDAF0  85 C9                     TEST ECX,ECX
006FDAF2  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FDAF5  0F 8E AA 00 00 00         JLE 0x006fdba5
LAB_006fdafb:
006FDAFB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FDAFE  84 13                     TEST byte ptr [EBX],DL
006FDB00  75 23                     JNZ 0x006fdb25
006FDB02  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDB05  33 C9                     XOR ECX,ECX
006FDB07  66 8B 0B                  MOV CX,word ptr [EBX]
006FDB0A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FDB0D  3B D9                     CMP EBX,ECX
006FDB0F  77 05                     JA 0x006fdb16
006FDB11  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FDB14  EB 0A                     JMP 0x006fdb20
LAB_006fdb16:
006FDB16  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDB19  33 C9                     XOR ECX,ECX
006FDB1B  8A 0E                     MOV CL,byte ptr [ESI]
006FDB1D  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fdb20:
006FDB20  88 0F                     MOV byte ptr [EDI],CL
006FDB22  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fdb25:
006FDB25  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDB28  83 C3 02                  ADD EBX,0x2
006FDB2B  47                        INC EDI
006FDB2C  46                        INC ESI
006FDB2D  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDB30  D1 EA                     SHR EDX,0x1
006FDB32  75 0C                     JNZ 0x006fdb40
006FDB34  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FDB37  BA 80 00 00 00            MOV EDX,0x80
006FDB3C  43                        INC EBX
006FDB3D  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fdb40:
006FDB40  83 E9 02                  SUB ECX,0x2
006FDB43  85 C9                     TEST ECX,ECX
006FDB45  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FDB48  7E 58                     JLE 0x006fdba2
006FDB4A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FDB4D  84 13                     TEST byte ptr [EBX],DL
006FDB4F  75 23                     JNZ 0x006fdb74
006FDB51  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDB54  33 C9                     XOR ECX,ECX
006FDB56  66 8B 0B                  MOV CX,word ptr [EBX]
006FDB59  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FDB5C  3B D9                     CMP EBX,ECX
006FDB5E  77 05                     JA 0x006fdb65
006FDB60  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
006FDB63  EB 0A                     JMP 0x006fdb6f
LAB_006fdb65:
006FDB65  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDB68  33 C9                     XOR ECX,ECX
006FDB6A  8A 0E                     MOV CL,byte ptr [ESI]
006FDB6C  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fdb6f:
006FDB6F  88 0F                     MOV byte ptr [EDI],CL
006FDB71  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_006fdb74:
006FDB74  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDB77  83 C3 02                  ADD EBX,0x2
006FDB7A  47                        INC EDI
006FDB7B  46                        INC ESI
006FDB7C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDB7F  D1 EA                     SHR EDX,0x1
006FDB81  75 0C                     JNZ 0x006fdb8f
006FDB83  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
006FDB86  BA 80 00 00 00            MOV EDX,0x80
006FDB8B  43                        INC EBX
006FDB8C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006fdb8f:
006FDB8F  83 E9 02                  SUB ECX,0x2
006FDB92  85 C9                     TEST ECX,ECX
006FDB94  7E 0C                     JLE 0x006fdba2
006FDB96  49                        DEC ECX
006FDB97  85 C9                     TEST ECX,ECX
006FDB99  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006FDB9C  0F 8F 59 FF FF FF         JG 0x006fdafb
LAB_006fdba2:
006FDBA2  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006fdba5:
006FDBA5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006FDBA8  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006FDBAB  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006FDBAE  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006FDBB1  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006FDBB4  2B CB                     SUB ECX,EBX
006FDBB6  2B CF                     SUB ECX,EDI
006FDBB8  3B C1                     CMP EAX,ECX
006FDBBA  7D 2E                     JGE 0x006fdbea
LAB_006fdbbc:
006FDBBC  81 E2 C0 00 00 00         AND EDX,0xc0
006FDBC2  2B C8                     SUB ECX,EAX
006FDBC4  80 FA 80                  CMP DL,0x80
006FDBC7  75 02                     JNZ 0x006fdbcb
006FDBC9  03 F0                     ADD ESI,EAX
LAB_006fdbcb:
006FDBCB  33 D2                     XOR EDX,EDX
006FDBCD  8A 16                     MOV DL,byte ptr [ESI]
006FDBCF  8B C2                     MOV EAX,EDX
006FDBD1  24 80                     AND AL,0x80
006FDBD3  46                        INC ESI
006FDBD4  84 C0                     TEST AL,AL
006FDBD6  8B C2                     MOV EAX,EDX
006FDBD8  74 09                     JZ 0x006fdbe3
006FDBDA  83 E0 3F                  AND EAX,0x3f
006FDBDD  F6 C2 40                  TEST DL,0x40
006FDBE0  74 01                     JZ 0x006fdbe3
006FDBE2  46                        INC ESI
LAB_006fdbe3:
006FDBE3  3B C1                     CMP EAX,ECX
006FDBE5  7C D5                     JL 0x006fdbbc
006FDBE7  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fdbea:
006FDBEA  81 E2 C0 00 00 00         AND EDX,0xc0
006FDBF0  80 FA 80                  CMP DL,0x80
006FDBF3  75 05                     JNZ 0x006fdbfa
006FDBF5  03 F1                     ADD ESI,ECX
006FDBF7  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_006fdbfa:
006FDBFA  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
LAB_006fdbfd:
006FDBFD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006FDC00  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006FDC03  8B 5D 44                  MOV EBX,dword ptr [EBP + 0x44]
006FDC06  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006FDC09  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006FDC0C  03 C1                     ADD EAX,ECX
006FDC0E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006FDC11  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006FDC14  8B 45 48                  MOV EAX,dword ptr [EBP + 0x48]
006FDC17  03 F9                     ADD EDI,ECX
006FDC19  03 D8                     ADD EBX,EAX
006FDC1B  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006FDC1E  03 F0                     ADD ESI,EAX
006FDC20  42                        INC EDX
006FDC21  83 FA 04                  CMP EDX,0x4
006FDC24  89 5D 44                  MOV dword ptr [EBP + 0x44],EBX
006FDC27  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006FDC2A  89 75 38                  MOV dword ptr [EBP + 0x38],ESI
006FDC2D  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
006FDC30  7E 05                     JLE 0x006fdc37
006FDC32  33 D2                     XOR EDX,EDX
006FDC34  89 55 34                  MOV dword ptr [EBP + 0x34],EDX
LAB_006fdc37:
006FDC37  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006FDC3A  48                        DEC EAX
006FDC3B  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006FDC3E  0F 89 22 F8 FF FF         JNS 0x006fd466
006FDC44  5F                        POP EDI
006FDC45  5E                        POP ESI
006FDC46  5B                        POP EBX
LAB_006fdc47:
006FDC47  8B E5                     MOV ESP,EBP
006FDC49  5D                        POP EBP
006FDC4A  C2 48 00                  RET 0x48
LAB_006fdc4d:
006FDC4D  85 C9                     TEST ECX,ECX
006FDC4F  0F 8E FE 00 00 00         JLE 0x006fdd53
006FDC55  49                        DEC ECX
006FDC56  83 F9 03                  CMP ECX,0x3
006FDC59  0F 87 F4 00 00 00         JA 0x006fdd53
switchD_006fdc5f::switchD:
006FDC5F  FF 24 8D 84 DE 6F 00      JMP dword ptr [ECX*0x4 + 0x6fde84]
switchD_006fdc5f::caseD_1:
006FDC66  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDC69  84 11                     TEST byte ptr [ECX],DL
006FDC6B  75 25                     JNZ 0x006fdc92
006FDC6D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006FDC70  33 C9                     XOR ECX,ECX
006FDC72  66 8B 0E                  MOV CX,word ptr [ESI]
006FDC75  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006FDC78  3B F1                     CMP ESI,ECX
006FDC7A  77 07                     JA 0x006fdc83
006FDC7C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDC7F  8A 09                     MOV CL,byte ptr [ECX]
006FDC81  EB 0D                     JMP 0x006fdc90
LAB_006fdc83:
006FDC83  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FDC86  33 C9                     XOR ECX,ECX
006FDC88  8A 0E                     MOV CL,byte ptr [ESI]
006FDC8A  8B 75 4C                  MOV ESI,dword ptr [EBP + 0x4c]
006FDC8D  8A 0C 31                  MOV CL,byte ptr [ECX + ESI*0x1]
LAB_006fdc90:
006FDC90  88 0F                     MOV byte ptr [EDI],CL
LAB_006fdc92:
006FDC92  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006FDC95  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006FDC98  83 C1 02                  ADD ECX,0x2
006FDC9B  47                        INC EDI
006FDC9C  46                        INC ESI
006FDC9D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006FDCA0  D1 EA                     SHR EDX,0x1
006FDCA2  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006FDCA5  75 0C                     JNZ 0x006fdcb3
006FDCA7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDCAA  BA 80 00 00 00            MOV EDX,0x80
006FDCAF  41                        INC ECX
006FDCB0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fdcb3:
006FDCB3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDCB6  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FDCB9  41                        INC ECX
006FDCBA  4E                        DEC ESI
006FDCBB  85 F6                     TEST ESI,ESI
006FDCBD  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDCC0  0F 8E DF FE FF FF         JLE 0x006fdba5
006FDCC6  EB 03                     JMP 0x006fdccb
switchD_006fdc5f::caseD_2:
006FDCC8  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006fdccb:
006FDCCB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDCCE  41                        INC ECX
006FDCCF  4E                        DEC ESI
006FDCD0  85 F6                     TEST ESI,ESI
006FDCD2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDCD5  0F 8E CA FE FF FF         JLE 0x006fdba5
006FDCDB  EB 03                     JMP 0x006fdce0
switchD_006fdc5f::caseD_3:
006FDCDD  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_006fdce0:
006FDCE0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDCE3  84 11                     TEST byte ptr [ECX],DL
006FDCE5  75 25                     JNZ 0x006fdd0c
006FDCE7  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDCEA  33 C9                     XOR ECX,ECX
006FDCEC  66 8B 0B                  MOV CX,word ptr [EBX]
006FDCEF  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FDCF2  3B D9                     CMP EBX,ECX
006FDCF4  77 07                     JA 0x006fdcfd
006FDCF6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDCF9  8A 09                     MOV CL,byte ptr [ECX]
006FDCFB  EB 0D                     JMP 0x006fdd0a
LAB_006fdcfd:
006FDCFD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FDD00  33 C9                     XOR ECX,ECX
006FDD02  8A 0B                     MOV CL,byte ptr [EBX]
006FDD04  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDD07  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fdd0a:
006FDD0A  88 0F                     MOV byte ptr [EDI],CL
LAB_006fdd0c:
006FDD0C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDD0F  83 C3 02                  ADD EBX,0x2
006FDD12  47                        INC EDI
006FDD13  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDD16  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FDD19  43                        INC EBX
006FDD1A  D1 EA                     SHR EDX,0x1
006FDD1C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FDD1F  75 0C                     JNZ 0x006fdd2d
006FDD21  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDD24  BA 80 00 00 00            MOV EDX,0x80
006FDD29  41                        INC ECX
006FDD2A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fdd2d:
006FDD2D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDD30  41                        INC ECX
006FDD31  4E                        DEC ESI
006FDD32  85 F6                     TEST ESI,ESI
006FDD34  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDD37  0F 8E 68 FE FF FF         JLE 0x006fdba5
006FDD3D  8B D9                     MOV EBX,ECX
006FDD3F  43                        INC EBX
006FDD40  4E                        DEC ESI
006FDD41  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FDD44  EB 10                     JMP 0x006fdd56
switchD_006fdc5f::caseD_4:
006FDD46  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006FDD49  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006FDD4C  43                        INC EBX
006FDD4D  4E                        DEC ESI
006FDD4E  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006FDD51  EB 03                     JMP 0x006fdd56
LAB_006fdd53:
006FDD53  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
switchD_006fdc5f::default:
006FDD56  85 F6                     TEST ESI,ESI
006FDD58  0F 8E 47 FE FF FF         JLE 0x006fdba5
006FDD5E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDD61  41                        INC ECX
006FDD62  4E                        DEC ESI
006FDD63  85 F6                     TEST ESI,ESI
006FDD65  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDD68  0F 8E 37 FE FF FF         JLE 0x006fdba5
LAB_006fdd6e:
006FDD6E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDD71  84 11                     TEST byte ptr [ECX],DL
006FDD73  75 25                     JNZ 0x006fdd9a
006FDD75  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDD78  33 C9                     XOR ECX,ECX
006FDD7A  66 8B 0B                  MOV CX,word ptr [EBX]
006FDD7D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FDD80  3B D9                     CMP EBX,ECX
006FDD82  77 07                     JA 0x006fdd8b
006FDD84  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDD87  8A 09                     MOV CL,byte ptr [ECX]
006FDD89  EB 0D                     JMP 0x006fdd98
LAB_006fdd8b:
006FDD8B  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FDD8E  33 C9                     XOR ECX,ECX
006FDD90  8A 0B                     MOV CL,byte ptr [EBX]
006FDD92  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDD95  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fdd98:
006FDD98  88 0F                     MOV byte ptr [EDI],CL
LAB_006fdd9a:
006FDD9A  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDD9D  83 C3 02                  ADD EBX,0x2
006FDDA0  47                        INC EDI
006FDDA1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDDA4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FDDA7  43                        INC EBX
006FDDA8  D1 EA                     SHR EDX,0x1
006FDDAA  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FDDAD  75 0C                     JNZ 0x006fddbb
006FDDAF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDDB2  BA 80 00 00 00            MOV EDX,0x80
006FDDB7  41                        INC ECX
006FDDB8  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fddbb:
006FDDBB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDDBE  41                        INC ECX
006FDDBF  4E                        DEC ESI
006FDDC0  85 F6                     TEST ESI,ESI
006FDDC2  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDDC5  0F 8E DA FD FF FF         JLE 0x006fdba5
006FDDCB  41                        INC ECX
006FDDCC  4E                        DEC ESI
006FDDCD  85 F6                     TEST ESI,ESI
006FDDCF  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDDD2  0F 8E CD FD FF FF         JLE 0x006fdba5
006FDDD8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDDDB  84 11                     TEST byte ptr [ECX],DL
006FDDDD  75 25                     JNZ 0x006fde04
006FDDDF  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDDE2  33 C9                     XOR ECX,ECX
006FDDE4  66 8B 0B                  MOV CX,word ptr [EBX]
006FDDE7  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006FDDEA  3B D9                     CMP EBX,ECX
006FDDEC  77 07                     JA 0x006fddf5
006FDDEE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDDF1  8A 09                     MOV CL,byte ptr [ECX]
006FDDF3  EB 0D                     JMP 0x006fde02
LAB_006fddf5:
006FDDF5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FDDF8  33 C9                     XOR ECX,ECX
006FDDFA  8A 0B                     MOV CL,byte ptr [EBX]
006FDDFC  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006FDDFF  8A 0C 19                  MOV CL,byte ptr [ECX + EBX*0x1]
LAB_006fde02:
006FDE02  88 0F                     MOV byte ptr [EDI],CL
LAB_006fde04:
006FDE04  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006FDE07  83 C3 02                  ADD EBX,0x2
006FDE0A  47                        INC EDI
006FDE0B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006FDE0E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006FDE11  43                        INC EBX
006FDE12  D1 EA                     SHR EDX,0x1
006FDE14  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006FDE17  75 0C                     JNZ 0x006fde25
006FDE19  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006FDE1C  BA 80 00 00 00            MOV EDX,0x80
006FDE21  41                        INC ECX
006FDE22  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006fde25:
006FDE25  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006FDE28  41                        INC ECX
006FDE29  4E                        DEC ESI
006FDE2A  85 F6                     TEST ESI,ESI
006FDE2C  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDE2F  0F 8E 70 FD FF FF         JLE 0x006fdba5
006FDE35  41                        INC ECX
006FDE36  4E                        DEC ESI
006FDE37  85 F6                     TEST ESI,ESI
006FDE39  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDE3C  0F 8E 63 FD FF FF         JLE 0x006fdba5
006FDE42  41                        INC ECX
006FDE43  4E                        DEC ESI
006FDE44  85 F6                     TEST ESI,ESI
006FDE46  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
006FDE49  0F 8F 1F FF FF FF         JG 0x006fdd6e
006FDE4F  E9 51 FD FF FF            JMP 0x006fdba5
