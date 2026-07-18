FUN_0070d1f0:
0070D1F0  55                        PUSH EBP
0070D1F1  8B EC                     MOV EBP,ESP
0070D1F3  83 EC 58                  SUB ESP,0x58
0070D1F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070D1FB  53                        PUSH EBX
0070D1FC  56                        PUSH ESI
0070D1FD  57                        PUSH EDI
0070D1FE  33 FF                     XOR EDI,EDI
0070D200  8D 55 AC                  LEA EDX,[EBP + -0x54]
0070D203  8D 4D A8                  LEA ECX,[EBP + -0x58]
0070D206  57                        PUSH EDI
0070D207  52                        PUSH EDX
0070D208  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070D20B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070D20E  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0070D211  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070D217  E8 D4 05 02 00            CALL 0x0072d7f0
0070D21C  8B D8                     MOV EBX,EAX
0070D21E  83 C4 08                  ADD ESP,0x8
0070D221  3B DF                     CMP EBX,EDI
0070D223  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
0070D226  0F 85 05 0B 00 00         JNZ 0x0070dd31
0070D22C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070D22F  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
0070D232  3B C7                     CMP EAX,EDI
0070D234  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0070D237  74 19                     JZ 0x0070d252
0070D239  39 7D 18                  CMP dword ptr [EBP + 0x18],EDI
0070D23C  74 14                     JZ 0x0070d252
0070D23E  39 7D 1C                  CMP dword ptr [EBP + 0x1c],EDI
0070D241  74 0F                     JZ 0x0070d252
0070D243  83 F8 01                  CMP EAX,0x1
0070D246  7C 0A                     JL 0x0070d252
0070D248  83 F8 10                  CMP EAX,0x10
0070D24B  7D 05                     JGE 0x0070d252
0070D24D  83 FE 02                  CMP ESI,0x2
0070D250  7D 17                     JGE 0x0070d269
LAB_0070d252:
0070D252  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070D257  68 F7 00 00 00            PUSH 0xf7
0070D25C  68 90 01 7F 00            PUSH 0x7f0190
0070D261  50                        PUSH EAX
0070D262  6A CC                     PUSH -0x34
0070D264  E8 D7 8B F9 FF            CALL 0x006a5e40
LAB_0070d269:
0070D269  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070D26C  51                        PUSH ECX
0070D26D  E8 9E D9 F9 FF            CALL 0x006aac10
0070D272  8B D8                     MOV EBX,EAX
0070D274  33 D2                     XOR EDX,EDX
0070D276  B9 10 00 00 00            MOV ECX,0x10
0070D27B  33 C0                     XOR EAX,EAX
0070D27D  89 13                     MOV dword ptr [EBX],EDX
0070D27F  8D 7B 04                  LEA EDI,[EBX + 0x4]
0070D282  89 93 9A 00 00 00         MOV dword ptr [EBX + 0x9a],EDX
0070D288  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0070D28B  F3 AB                     STOSD.REP ES:EDI
0070D28D  89 53 44                  MOV dword ptr [EBX + 0x44],EDX
0070D290  BF 01 00 00 00            MOV EDI,0x1
0070D295  89 53 48                  MOV dword ptr [EBX + 0x48],EDX
0070D298  89 7B 4C                  MOV dword ptr [EBX + 0x4c],EDI
0070D29B  89 53 54                  MOV dword ptr [EBX + 0x54],EDX
0070D29E  89 53 50                  MOV dword ptr [EBX + 0x50],EDX
0070D2A1  89 53 5C                  MOV dword ptr [EBX + 0x5c],EDX
0070D2A4  89 53 58                  MOV dword ptr [EBX + 0x58],EDX
0070D2A7  89 53 64                  MOV dword ptr [EBX + 0x64],EDX
0070D2AA  B8 64 00 00 00            MOV EAX,0x64
0070D2AF  89 53 60                  MOV dword ptr [EBX + 0x60],EDX
0070D2B2  89 43 6C                  MOV dword ptr [EBX + 0x6c],EAX
0070D2B5  89 43 68                  MOV dword ptr [EBX + 0x68],EAX
0070D2B8  66 89 53 70               MOV word ptr [EBX + 0x70],DX
0070D2BC  89 53 72                  MOV dword ptr [EBX + 0x72],EDX
0070D2BF  89 53 76                  MOV dword ptr [EBX + 0x76],EDX
0070D2C2  89 53 7A                  MOV dword ptr [EBX + 0x7a],EDX
0070D2C5  89 7B 7E                  MOV dword ptr [EBX + 0x7e],EDI
0070D2C8  66 89 93 9E 00 00 00      MOV word ptr [EBX + 0x9e],DX
0070D2CF  A0 54 C8 7C 00            MOV AL,[0x007cc854]
0070D2D4  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0070D2D7  88 83 9E 00 00 00         MOV byte ptr [EBX + 0x9e],AL
0070D2DD  C7 83 82 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x82],0xffffffff
0070D2E7  89 93 96 00 00 00         MOV dword ptr [EBX + 0x96],EDX
0070D2ED  89 93 8A 00 00 00         MOV dword ptr [EBX + 0x8a],EDX
0070D2F3  B8 F0 7F 00 00            MOV EAX,0x7ff0
0070D2F8  89 93 86 00 00 00         MOV dword ptr [EBX + 0x86],EDX
0070D2FE  89 83 92 00 00 00         MOV dword ptr [EBX + 0x92],EAX
0070D304  89 83 8E 00 00 00         MOV dword ptr [EBX + 0x8e],EAX
0070D30A  89 BB AC 00 00 00         MOV dword ptr [EBX + 0xac],EDI
0070D310  89 93 99 01 00 00         MOV dword ptr [EBX + 0x199],EDX
0070D316  89 8B 8D 01 00 00         MOV dword ptr [EBX + 0x18d],ECX
0070D31C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0070D31F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0070D322  0F AF CE                  IMUL ECX,ESI
0070D325  B8 80 00 00 00            MOV EAX,0x80
0070D32A  C7 83 35 01 00 00 20 03 00 00  MOV dword ptr [EBX + 0x135],0x320
0070D334  89 83 79 01 00 00         MOV dword ptr [EBX + 0x179],EAX
0070D33A  89 83 3D 01 00 00         MOV dword ptr [EBX + 0x13d],EAX
0070D340  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0070D343  89 93 59 01 00 00         MOV dword ptr [EBX + 0x159],EDX
0070D349  89 83 5D 01 00 00         MOV dword ptr [EBX + 0x15d],EAX
0070D34F  89 B3 89 01 00 00         MOV dword ptr [EBX + 0x189],ESI
0070D355  8D 71 01                  LEA ESI,[ECX + 0x1]
0070D358  56                        PUSH ESI
0070D359  E8 B2 D8 F9 FF            CALL 0x006aac10
0070D35E  8B CE                     MOV ECX,ESI
0070D360  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
0070D363  8B D1                     MOV EDX,ECX
0070D365  8B F8                     MOV EDI,EAX
0070D367  C1 E9 02                  SHR ECX,0x2
0070D36A  89 83 85 01 00 00         MOV dword ptr [EBX + 0x185],EAX
0070D370  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0070D373  F3 A5                     MOVSD.REP ES:EDI,ESI
0070D375  8B CA                     MOV ECX,EDX
0070D377  83 E1 03                  AND ECX,0x3
0070D37A  F6 C4 01                  TEST AH,0x1
0070D37D  F3 A4                     MOVSB.REP ES:EDI,ESI
0070D37F  74 0A                     JZ 0x0070d38b
0070D381  C7 83 6D 01 00 00 00 01 00 00  MOV dword ptr [EBX + 0x16d],0x100
LAB_0070d38b:
0070D38B  F6 C4 02                  TEST AH,0x2
0070D38E  74 0A                     JZ 0x0070d39a
0070D390  C7 83 6D 01 00 00 00 02 00 00  MOV dword ptr [EBX + 0x16d],0x200
LAB_0070d39a:
0070D39A  F6 C4 04                  TEST AH,0x4
0070D39D  74 0A                     JZ 0x0070d3a9
0070D39F  C7 83 6D 01 00 00 00 04 00 00  MOV dword ptr [EBX + 0x16d],0x400
LAB_0070d3a9:
0070D3A9  F6 C4 08                  TEST AH,0x8
0070D3AC  74 0A                     JZ 0x0070d3b8
0070D3AE  C7 83 6D 01 00 00 00 08 00 00  MOV dword ptr [EBX + 0x16d],0x800
LAB_0070d3b8:
0070D3B8  F6 C4 10                  TEST AH,0x10
0070D3BB  74 0A                     JZ 0x0070d3c7
0070D3BD  C7 83 6D 01 00 00 00 10 00 00  MOV dword ptr [EBX + 0x16d],0x1000
LAB_0070d3c7:
0070D3C7  F6 C4 20                  TEST AH,0x20
0070D3CA  74 0A                     JZ 0x0070d3d6
0070D3CC  C7 83 6D 01 00 00 00 20 00 00  MOV dword ptr [EBX + 0x16d],0x2000
LAB_0070d3d6:
0070D3D6  F6 C4 40                  TEST AH,0x40
0070D3D9  74 0A                     JZ 0x0070d3e5
0070D3DB  C7 83 6D 01 00 00 00 40 00 00  MOV dword ptr [EBX + 0x16d],0x4000
LAB_0070d3e5:
0070D3E5  A9 00 00 10 00            TEST EAX,0x100000
0070D3EA  74 0A                     JZ 0x0070d3f6
0070D3EC  C7 83 71 01 00 00 00 00 10 00  MOV dword ptr [EBX + 0x171],0x100000
LAB_0070d3f6:
0070D3F6  A9 00 00 20 00            TEST EAX,0x200000
0070D3FB  74 0A                     JZ 0x0070d407
0070D3FD  C7 83 71 01 00 00 00 00 20 00  MOV dword ptr [EBX + 0x171],0x200000
LAB_0070d407:
0070D407  A9 00 00 40 00            TEST EAX,0x400000
0070D40C  74 0A                     JZ 0x0070d418
0070D40E  C7 83 71 01 00 00 00 00 40 00  MOV dword ptr [EBX + 0x171],0x400000
LAB_0070d418:
0070D418  A9 00 00 80 00            TEST EAX,0x800000
0070D41D  74 0A                     JZ 0x0070d429
0070D41F  C7 83 71 01 00 00 00 00 80 00  MOV dword ptr [EBX + 0x171],0x800000
LAB_0070d429:
0070D429  A9 00 00 00 01            TEST EAX,0x1000000
0070D42E  74 0A                     JZ 0x0070d43a
0070D430  C7 83 71 01 00 00 00 00 00 01  MOV dword ptr [EBX + 0x171],0x1000000
LAB_0070d43a:
0070D43A  A8 10                     TEST AL,0x10
0070D43C  74 0A                     JZ 0x0070d448
0070D43E  C7 83 75 01 00 00 10 00 00 00  MOV dword ptr [EBX + 0x175],0x10
LAB_0070d448:
0070D448  A8 20                     TEST AL,0x20
0070D44A  74 0A                     JZ 0x0070d456
0070D44C  C7 83 75 01 00 00 20 00 00 00  MOV dword ptr [EBX + 0x175],0x20
LAB_0070d456:
0070D456  8B 83 71 01 00 00         MOV EAX,dword ptr [EBX + 0x171]
0070D45C  3D 00 00 40 00            CMP EAX,0x400000
0070D461  0F 87 5D 08 00 00         JA 0x0070dcc4
0070D467  0F 84 69 08 00 00         JZ 0x0070dcd6
0070D46D  3D 00 00 10 00            CMP EAX,0x100000
0070D472  0F 84 E2 07 00 00         JZ 0x0070dc5a
0070D478  3D 00 00 20 00            CMP EAX,0x200000
0070D47D  0F 84 53 08 00 00         JZ 0x0070dcd6
LAB_0070d483:
0070D483  33 F6                     XOR ESI,ESI
LAB_0070d485:
0070D485  56                        PUSH ESI
0070D486  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
0070D48C  8B F8                     MOV EDI,EAX
0070D48E  3B FE                     CMP EDI,ESI
0070D490  75 17                     JNZ 0x0070d4a9
0070D492  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070D497  68 40 01 00 00            PUSH 0x140
0070D49C  68 90 01 7F 00            PUSH 0x7f0190
0070D4A1  50                        PUSH EAX
0070D4A2  6A AF                     PUSH -0x51
0070D4A4  E8 97 89 F9 FF            CALL 0x006a5e40
LAB_0070d4a9:
0070D4A9  57                        PUSH EDI
0070D4AA  FF 15 9C BA 85 00         CALL dword ptr [0x0085ba9c]
0070D4B0  57                        PUSH EDI
0070D4B1  56                        PUSH ESI
0070D4B2  89 83 FD 00 00 00         MOV dword ptr [EBX + 0xfd],EAX
0070D4B8  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
0070D4BE  39 B3 FD 00 00 00         CMP dword ptr [EBX + 0xfd],ESI
0070D4C4  75 18                     JNZ 0x0070d4de
0070D4C6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070D4CC  68 43 01 00 00            PUSH 0x143
0070D4D1  68 90 01 7F 00            PUSH 0x7f0190
0070D4D6  51                        PUSH ECX
0070D4D7  6A AF                     PUSH -0x51
0070D4D9  E8 62 89 F9 FF            CALL 0x006a5e40
LAB_0070d4de:
0070D4DE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0070D4E1  52                        PUSH EDX
0070D4E2  FF 15 70 BA 85 00         CALL dword ptr [0x0085ba70]
0070D4E8  3B C6                     CMP EAX,ESI
0070D4EA  89 83 01 01 00 00         MOV dword ptr [EBX + 0x101],EAX
0070D4F0  75 17                     JNZ 0x0070d509
0070D4F2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070D4F7  68 44 01 00 00            PUSH 0x144
0070D4FC  68 90 01 7F 00            PUSH 0x7f0190
0070D501  50                        PUSH EAX
0070D502  6A AF                     PUSH -0x51
0070D504  E8 37 89 F9 FF            CALL 0x006a5e40
LAB_0070d509:
0070D509  8B 8B 01 01 00 00         MOV ECX,dword ptr [EBX + 0x101]
0070D50F  8B 93 FD 00 00 00         MOV EDX,dword ptr [EBX + 0xfd]
0070D515  51                        PUSH ECX
0070D516  52                        PUSH EDX
0070D517  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
0070D51D  89 83 05 01 00 00         MOV dword ptr [EBX + 0x105],EAX
0070D523  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070D529  8D BB C8 00 00 00         LEA EDI,[EBX + 0xc8]
0070D52F  57                        PUSH EDI
0070D530  50                        PUSH EAX
0070D531  FF 15 6C BA 85 00         CALL dword ptr [0x0085ba6c]
0070D537  8B 93 FD 00 00 00         MOV EDX,dword ptr [EBX + 0xfd]
0070D53D  8D 8B B0 00 00 00         LEA ECX,[EBX + 0xb0]
0070D543  56                        PUSH ESI
0070D544  51                        PUSH ECX
0070D545  52                        PUSH EDX
0070D546  FF 15 D8 BA 85 00         CALL dword ptr [0x0085bad8]
0070D54C  39 37                     CMP dword ptr [EDI],ESI
0070D54E  7E 08                     JLE 0x0070d558
0070D550  39 B3 E0 00 00 00         CMP dword ptr [EBX + 0xe0],ESI
0070D556  7F 17                     JG 0x0070d56f
LAB_0070d558:
0070D558  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070D55D  68 49 01 00 00            PUSH 0x149
0070D562  68 90 01 7F 00            PUSH 0x7f0190
0070D567  50                        PUSH EAX
0070D568  6A CC                     PUSH -0x34
0070D56A  E8 D1 88 F9 FF            CALL 0x006a5e40
LAB_0070d56f:
0070D56F  8B 8B 55 01 00 00         MOV ECX,dword ptr [EBX + 0x155]
0070D575  8B 17                     MOV EDX,dword ptr [EDI]
0070D577  03 CA                     ADD ECX,EDX
0070D579  89 8B 61 01 00 00         MOV dword ptr [EBX + 0x161],ECX
0070D57F  8B 93 51 01 00 00         MOV EDX,dword ptr [EBX + 0x151]
0070D585  03 93 E0 00 00 00         ADD EDX,dword ptr [EBX + 0xe0]
0070D58B  89 93 65 01 00 00         MOV dword ptr [EBX + 0x165],EDX
0070D591  8B 83 61 01 00 00         MOV EAX,dword ptr [EBX + 0x161]
0070D597  89 83 69 01 00 00         MOV dword ptr [EBX + 0x169],EAX
0070D59D  8B 83 79 01 00 00         MOV EAX,dword ptr [EBX + 0x179]
0070D5A3  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0070D5A6  8D 54 09 70               LEA EDX,[ECX + ECX*0x1 + 0x70]
0070D5AA  52                        PUSH EDX
0070D5AB  E8 60 D6 F9 FF            CALL 0x006aac10
0070D5B0  66 8B 4D 20               MOV CX,word ptr [EBP + 0x20]
0070D5B4  89 83 9A 00 00 00         MOV dword ptr [EBX + 0x9a],EAX
0070D5BA  66 89 08                  MOV word ptr [EAX],CX
0070D5BD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0070D5C0  89 B3 95 01 00 00         MOV dword ptr [EBX + 0x195],ESI
0070D5C6  8B 93 9A 00 00 00         MOV EDX,dword ptr [EBX + 0x9a]
0070D5CC  66 89 72 64               MOV word ptr [EDX + 0x64],SI
0070D5D0  8B 93 9A 00 00 00         MOV EDX,dword ptr [EBX + 0x9a]
0070D5D6  66 0F B6 08               MOVZX CX,byte ptr [EAX]
0070D5DA  8D 83 31 01 00 00         LEA EAX,[EBX + 0x131]
0070D5E0  66 89 4A 42               MOV word ptr [EDX + 0x42],CX
0070D5E4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0070D5E7  50                        PUSH EAX
0070D5E8  56                        PUSH ESI
0070D5E9  51                        PUSH ECX
0070D5EA  E8 F1 ED FA FF            CALL 0x006bc3e0
0070D5EF  8B 3D 7C BA 85 00         MOV EDI,dword ptr [0x0085ba7c]
0070D5F5  50                        PUSH EAX
0070D5F6  89 83 2D 01 00 00         MOV dword ptr [EBX + 0x12d],EAX
0070D5FC  FF D7                     CALL EDI
0070D5FE  68 08 04 00 00            PUSH 0x408
0070D603  89 83 11 01 00 00         MOV dword ptr [EBX + 0x111],EAX
0070D609  E8 02 D6 F9 FF            CALL 0x006aac10
0070D60E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0070D611  66 C7 00 00 03            MOV word ptr [EAX],0x300
0070D616  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070D619  66 C7 42 02 00 01         MOV word ptr [EDX + 0x2],0x100
0070D61F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070D622  C6 80 00 04 00 00 FF      MOV byte ptr [EAX + 0x400],0xff
0070D629  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070D62C  C6 81 01 04 00 00 FF      MOV byte ptr [ECX + 0x401],0xff
0070D633  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0070D636  C6 82 02 04 00 00 FF      MOV byte ptr [EDX + 0x402],0xff
0070D63D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070D640  50                        PUSH EAX
0070D641  FF D7                     CALL EDI
0070D643  8D 4D F8                  LEA ECX,[EBP + -0x8]
0070D646  89 83 15 01 00 00         MOV dword ptr [EBX + 0x115],EAX
0070D64C  51                        PUSH ECX
0070D64D  E8 0E DA F9 FF            CALL 0x006ab060
0070D652  39 B3 15 01 00 00         CMP dword ptr [EBX + 0x115],ESI
0070D658  75 18                     JNZ 0x0070d672
0070D65A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070D660  68 5B 01 00 00            PUSH 0x15b
0070D665  68 90 01 7F 00            PUSH 0x7f0190
0070D66A  52                        PUSH EDX
0070D66B  6A AF                     PUSH -0x51
0070D66D  E8 CE 87 F9 FF            CALL 0x006a5e40
LAB_0070d672:
0070D672  8B 83 69 01 00 00         MOV EAX,dword ptr [EBX + 0x169]
0070D678  8B 8B 65 01 00 00         MOV ECX,dword ptr [EBX + 0x165]
0070D67E  6A 01                     PUSH 0x1
0070D680  68 00 01 00 00            PUSH 0x100
0070D685  6A 08                     PUSH 0x8
0070D687  50                        PUSH EAX
0070D688  51                        PUSH ECX
0070D689  E8 62 3A FC FF            CALL 0x006d10f0
0070D68E  3B C6                     CMP EAX,ESI
0070D690  89 83 25 01 00 00         MOV dword ptr [EBX + 0x125],EAX
0070D696  75 18                     JNZ 0x0070d6b0
0070D698  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070D69E  68 5D 01 00 00            PUSH 0x15d
0070D6A3  68 90 01 7F 00            PUSH 0x7f0190
0070D6A8  52                        PUSH EDX
0070D6A9  6A AF                     PUSH -0x51
0070D6AB  E8 90 87 F9 FF            CALL 0x006a5e40
LAB_0070d6b0:
0070D6B0  33 C0                     XOR EAX,EAX
LAB_0070d6b2:
0070D6B2  8B 93 25 01 00 00         MOV EDX,dword ptr [EBX + 0x125]
0070D6B8  3D FF 00 00 00            CMP EAX,0xff
0070D6BD  0F 95 C1                  SETNZ CL
0070D6C0  49                        DEC ECX
0070D6C1  81 E1 FF 00 00 00         AND ECX,0xff
0070D6C7  88 4C 82 2A               MOV byte ptr [EDX + EAX*0x4 + 0x2a],CL
0070D6CB  8B 93 25 01 00 00         MOV EDX,dword ptr [EBX + 0x125]
0070D6D1  88 4C 82 29               MOV byte ptr [EDX + EAX*0x4 + 0x29],CL
0070D6D5  8B 93 25 01 00 00         MOV EDX,dword ptr [EBX + 0x125]
0070D6DB  88 4C 82 28               MOV byte ptr [EDX + EAX*0x4 + 0x28],CL
0070D6DF  8B 8B 25 01 00 00         MOV ECX,dword ptr [EBX + 0x125]
0070D6E5  C6 44 81 2B 00            MOV byte ptr [ECX + EAX*0x4 + 0x2b],0x0
0070D6EA  40                        INC EAX
0070D6EB  3D 00 01 00 00            CMP EAX,0x100
0070D6F0  7C C0                     JL 0x0070d6b2
0070D6F2  8B 93 25 01 00 00         MOV EDX,dword ptr [EBX + 0x125]
0070D6F8  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070D6FE  8D BB 29 01 00 00         LEA EDI,[EBX + 0x129]
0070D704  56                        PUSH ESI
0070D705  56                        PUSH ESI
0070D706  57                        PUSH EDI
0070D707  56                        PUSH ESI
0070D708  52                        PUSH EDX
0070D709  50                        PUSH EAX
0070D70A  FF 15 98 BA 85 00         CALL dword ptr [0x0085ba98]
0070D710  89 83 1D 01 00 00         MOV dword ptr [EBX + 0x11d],EAX
0070D716  8B 07                     MOV EAX,dword ptr [EDI]
0070D718  3B C6                     CMP EAX,ESI
0070D71A  75 18                     JNZ 0x0070d734
0070D71C  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070D722  68 64 01 00 00            PUSH 0x164
0070D727  68 90 01 7F 00            PUSH 0x7f0190
0070D72C  51                        PUSH ECX
0070D72D  6A AF                     PUSH -0x51
0070D72F  E8 0C 87 F9 FF            CALL 0x006a5e40
LAB_0070d734:
0070D734  8B 93 15 01 00 00         MOV EDX,dword ptr [EBX + 0x115]
0070D73A  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070D740  56                        PUSH ESI
0070D741  52                        PUSH EDX
0070D742  50                        PUSH EAX
0070D743  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
0070D749  89 83 19 01 00 00         MOV dword ptr [EBX + 0x119],EAX
0070D74F  8B 8B 1D 01 00 00         MOV ECX,dword ptr [EBX + 0x11d]
0070D755  8B 93 FD 00 00 00         MOV EDX,dword ptr [EBX + 0xfd]
0070D75B  51                        PUSH ECX
0070D75C  52                        PUSH EDX
0070D75D  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
0070D763  56                        PUSH ESI
0070D764  89 83 21 01 00 00         MOV dword ptr [EBX + 0x121],EAX
0070D76A  FF 15 74 BA 85 00         CALL dword ptr [0x0085ba74]
0070D770  3B C6                     CMP EAX,ESI
0070D772  89 83 09 01 00 00         MOV dword ptr [EBX + 0x109],EAX
0070D778  75 17                     JNZ 0x0070d791
0070D77A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070D77F  68 68 01 00 00            PUSH 0x168
0070D784  68 90 01 7F 00            PUSH 0x7f0190
0070D789  50                        PUSH EAX
0070D78A  6A AF                     PUSH -0x51
0070D78C  E8 AF 86 F9 FF            CALL 0x006a5e40
LAB_0070d791:
0070D791  8B 8B FD 00 00 00         MOV ECX,dword ptr [EBX + 0xfd]
0070D797  6A 01                     PUSH 0x1
0070D799  51                        PUSH ECX
0070D79A  FF 15 68 BA 85 00         CALL dword ptr [0x0085ba68]
0070D7A0  8B 93 FD 00 00 00         MOV EDX,dword ptr [EBX + 0xfd]
0070D7A6  56                        PUSH ESI
0070D7A7  52                        PUSH EDX
0070D7A8  FF 15 D4 BA 85 00         CALL dword ptr [0x0085bad4]
0070D7AE  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070D7B4  68 FF FF FF 00            PUSH 0xffffff
0070D7B9  50                        PUSH EAX
0070D7BA  FF 15 B8 BA 85 00         CALL dword ptr [0x0085bab8]
0070D7C0  8B 8B 61 01 00 00         MOV ECX,dword ptr [EBX + 0x161]
0070D7C6  33 FF                     XOR EDI,EDI
0070D7C8  89 8B 39 01 00 00         MOV dword ptr [EBX + 0x139],ECX
0070D7CE  8B 93 9A 00 00 00         MOV EDX,dword ptr [EBX + 0x9a]
0070D7D4  66 39 32                  CMP word ptr [EDX],SI
0070D7D7  7E 64                     JLE 0x0070d83d
0070D7D9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0070D7DC  8D 73 04                  LEA ESI,[EBX + 0x4]
0070D7DF  83 C0 28                  ADD EAX,0x28
0070D7E2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0070d7e5:
0070D7E5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070D7E8  8B 93 39 01 00 00         MOV EDX,dword ptr [EBX + 0x139]
0070D7EE  8B 83 35 01 00 00         MOV EAX,dword ptr [EBX + 0x135]
0070D7F4  6A 01                     PUSH 0x1
0070D7F6  51                        PUSH ECX
0070D7F7  68 00 01 00 00            PUSH 0x100
0070D7FC  6A 08                     PUSH 0x8
0070D7FE  52                        PUSH EDX
0070D7FF  50                        PUSH EAX
0070D800  E8 BB 78 FA FF            CALL 0x006b50c0
0070D805  89 06                     MOV dword ptr [ESI],EAX
0070D807  8B 8B 9A 00 00 00         MOV ECX,dword ptr [EBX + 0x9a]
0070D80D  0F BF 51 42               MOVSX EDX,word ptr [ECX + 0x42]
0070D811  8B 8B 39 01 00 00         MOV ECX,dword ptr [EBX + 0x139]
0070D817  52                        PUSH EDX
0070D818  8B 93 35 01 00 00         MOV EDX,dword ptr [EBX + 0x135]
0070D81E  51                        PUSH ECX
0070D81F  52                        PUSH EDX
0070D820  6A 00                     PUSH 0x0
0070D822  6A 00                     PUSH 0x0
0070D824  6A 00                     PUSH 0x0
0070D826  50                        PUSH EAX
0070D827  E8 44 69 FA FF            CALL 0x006b4170
0070D82C  8B 83 9A 00 00 00         MOV EAX,dword ptr [EBX + 0x9a]
0070D832  47                        INC EDI
0070D833  83 C6 04                  ADD ESI,0x4
0070D836  0F BF 08                  MOVSX ECX,word ptr [EAX]
0070D839  3B F9                     CMP EDI,ECX
0070D83B  7C A8                     JL 0x0070d7e5
LAB_0070d83d:
0070D83D  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0070D840  C7 83 91 01 00 00 02 00 00 00  MOV dword ptr [EBX + 0x191],0x2
0070D84A  8B F2                     MOV ESI,EDX
0070D84C  83 E6 01                  AND ESI,0x1
0070D84F  74 1B                     JZ 0x0070d86c
0070D851  33 C0                     XOR EAX,EAX
0070D853  33 C9                     XOR ECX,ECX
0070D855  8A 83 F5 00 00 00         MOV AL,byte ptr [EBX + 0xf5]
0070D85B  8A 8B F4 00 00 00         MOV CL,byte ptr [EBX + 0xf4]
0070D861  2B C1                     SUB EAX,ECX
0070D863  83 C0 03                  ADD EAX,0x3
0070D866  89 83 91 01 00 00         MOV dword ptr [EBX + 0x191],EAX
LAB_0070d86c:
0070D86C  8B C2                     MOV EAX,EDX
0070D86E  83 E0 02                  AND EAX,0x2
0070D871  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0070D874  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070D877  74 41                     JZ 0x0070d8ba
0070D879  85 C0                     TEST EAX,EAX
0070D87B  74 3D                     JZ 0x0070d8ba
0070D87D  83 38 FF                  CMP dword ptr [EAX],-0x1
0070D880  74 38                     JZ 0x0070d8ba
0070D882  8B F8                     MOV EDI,EAX
LAB_0070d884:
0070D884  8B 08                     MOV ECX,dword ptr [EAX]
0070D886  66 8B 00                  MOV AX,word ptr [EAX]
0070D889  C1 E9 10                  SHR ECX,0x10
0070D88C  66 3B C8                  CMP CX,AX
0070D88F  77 1C                     JA 0x0070d8ad
0070D891  25 FF FF 00 00            AND EAX,0xffff
0070D896  81 E1 FF FF 00 00         AND ECX,0xffff
0070D89C  2B C1                     SUB EAX,ECX
0070D89E  8B 8B 91 01 00 00         MOV ECX,dword ptr [EBX + 0x191]
0070D8A4  40                        INC EAX
0070D8A5  03 C8                     ADD ECX,EAX
0070D8A7  89 8B 91 01 00 00         MOV dword ptr [EBX + 0x191],ECX
LAB_0070d8ad:
0070D8AD  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0070D8B0  83 C7 04                  ADD EDI,0x4
0070D8B3  83 F9 FF                  CMP ECX,-0x1
0070D8B6  8B C7                     MOV EAX,EDI
0070D8B8  75 CA                     JNZ 0x0070d884
LAB_0070d8ba:
0070D8BA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070D8BD  85 C0                     TEST EAX,EAX
0070D8BF  74 1D                     JZ 0x0070d8de
0070D8C1  F6 C2 04                  TEST DL,0x4
0070D8C4  74 18                     JZ 0x0070d8de
0070D8C6  80 38 00                  CMP byte ptr [EAX],0x0
0070D8C9  74 13                     JZ 0x0070d8de
LAB_0070d8cb:
0070D8CB  8B BB 91 01 00 00         MOV EDI,dword ptr [EBX + 0x191]
0070D8D1  47                        INC EDI
0070D8D2  40                        INC EAX
0070D8D3  89 BB 91 01 00 00         MOV dword ptr [EBX + 0x191],EDI
0070D8D9  80 38 00                  CMP byte ptr [EAX],0x0
0070D8DC  75 ED                     JNZ 0x0070d8cb
LAB_0070d8de:
0070D8DE  8B 83 71 01 00 00         MOV EAX,dword ptr [EBX + 0x171]
0070D8E4  3D 00 00 40 00            CMP EAX,0x400000
0070D8E9  74 0E                     JZ 0x0070d8f9
0070D8EB  3D 00 00 80 00            CMP EAX,0x800000
0070D8F0  74 07                     JZ 0x0070d8f9
0070D8F2  3D 00 00 00 01            CMP EAX,0x1000000
0070D8F7  75 10                     JNZ 0x0070d909
LAB_0070d8f9:
0070D8F9  68 FF FF 03 00            PUSH 0x3ffff
0070D8FE  E8 0D D3 F9 FF            CALL 0x006aac10
0070D903  89 83 99 01 00 00         MOV dword ptr [EBX + 0x199],EAX
LAB_0070d909:
0070D909  8B 7D 34                  MOV EDI,dword ptr [EBP + 0x34]
0070D90C  85 FF                     TEST EDI,EDI
0070D90E  74 28                     JZ 0x0070d938
0070D910  53                        PUSH EBX
0070D911  FF D7                     CALL EDI
0070D913  83 C4 04                  ADD ESP,0x4
0070D916  85 C0                     TEST EAX,EAX
0070D918  74 1E                     JZ 0x0070d938
0070D91A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070D920  68 83 01 00 00            PUSH 0x183
0070D925  68 90 01 7F 00            PUSH 0x7f0190
0070D92A  52                        PUSH EDX
0070D92B  50                        PUSH EAX
0070D92C  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070D933  E8 08 85 F9 FF            CALL 0x006a5e40
LAB_0070d938:
0070D938  66 0F B6 83 F6 00 00 00   MOVZX AX,byte ptr [EBX + 0xf6]
0070D940  6A 00                     PUSH 0x0
0070D942  50                        PUSH EAX
0070D943  53                        PUSH EBX
0070D944  E8 E7 06 00 00            CALL 0x0070e030
0070D949  83 C4 0C                  ADD ESP,0xc
0070D94C  85 FF                     TEST EDI,EDI
0070D94E  74 28                     JZ 0x0070d978
0070D950  53                        PUSH EBX
0070D951  FF D7                     CALL EDI
0070D953  83 C4 04                  ADD ESP,0x4
0070D956  85 C0                     TEST EAX,EAX
0070D958  74 1E                     JZ 0x0070d978
0070D95A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070D960  68 85 01 00 00            PUSH 0x185
0070D965  68 90 01 7F 00            PUSH 0x7f0190
0070D96A  51                        PUSH ECX
0070D96B  50                        PUSH EAX
0070D96C  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070D973  E8 C8 84 F9 FF            CALL 0x006a5e40
LAB_0070d978:
0070D978  66 0F B6 93 F7 00 00 00   MOVZX DX,byte ptr [EBX + 0xf7]
0070D980  6A 00                     PUSH 0x0
0070D982  52                        PUSH EDX
0070D983  53                        PUSH EBX
0070D984  E8 A7 06 00 00            CALL 0x0070e030
0070D989  83 C4 0C                  ADD ESP,0xc
0070D98C  85 FF                     TEST EDI,EDI
0070D98E  74 28                     JZ 0x0070d9b8
0070D990  53                        PUSH EBX
0070D991  FF D7                     CALL EDI
0070D993  83 C4 04                  ADD ESP,0x4
0070D996  85 C0                     TEST EAX,EAX
0070D998  74 1E                     JZ 0x0070d9b8
0070D99A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070D9A0  68 86 01 00 00            PUSH 0x186
0070D9A5  68 90 01 7F 00            PUSH 0x7f0190
0070D9AA  51                        PUSH ECX
0070D9AB  50                        PUSH EAX
0070D9AC  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070D9B3  E8 88 84 F9 FF            CALL 0x006a5e40
LAB_0070d9b8:
0070D9B8  85 F6                     TEST ESI,ESI
0070D9BA  0F 84 82 00 00 00         JZ 0x0070da42
0070D9C0  33 C0                     XOR EAX,EAX
0070D9C2  33 D2                     XOR EDX,EDX
0070D9C4  8A 83 F5 00 00 00         MOV AL,byte ptr [EBX + 0xf5]
0070D9CA  8A 93 F4 00 00 00         MOV DL,byte ptr [EBX + 0xf4]
0070D9D0  2B C2                     SUB EAX,EDX
0070D9D2  40                        INC EAX
0070D9D3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0070D9D6  79 17                     JNS 0x0070d9ef
0070D9D8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070D9DD  68 89 01 00 00            PUSH 0x189
0070D9E2  68 90 01 7F 00            PUSH 0x7f0190
0070D9E7  50                        PUSH EAX
0070D9E8  6A CC                     PUSH -0x34
0070D9EA  E8 51 84 F9 FF            CALL 0x006a5e40
LAB_0070d9ef:
0070D9EF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070D9F2  33 F6                     XOR ESI,ESI
0070D9F4  85 C0                     TEST EAX,EAX
0070D9F6  7E 4A                     JLE 0x0070da42
LAB_0070d9f8:
0070D9F8  66 0F B6 8B F4 00 00 00   MOVZX CX,byte ptr [EBX + 0xf4]
0070DA00  03 CE                     ADD ECX,ESI
0070DA02  6A 00                     PUSH 0x0
0070DA04  51                        PUSH ECX
0070DA05  53                        PUSH EBX
0070DA06  E8 25 06 00 00            CALL 0x0070e030
0070DA0B  83 C4 0C                  ADD ESP,0xc
0070DA0E  85 FF                     TEST EDI,EDI
0070DA10  74 28                     JZ 0x0070da3a
0070DA12  53                        PUSH EBX
0070DA13  FF D7                     CALL EDI
0070DA15  83 C4 04                  ADD ESP,0x4
0070DA18  85 C0                     TEST EAX,EAX
0070DA1A  74 1E                     JZ 0x0070da3a
0070DA1C  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070DA22  68 8C 01 00 00            PUSH 0x18c
0070DA27  68 90 01 7F 00            PUSH 0x7f0190
0070DA2C  52                        PUSH EDX
0070DA2D  50                        PUSH EAX
0070DA2E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070DA35  E8 06 84 F9 FF            CALL 0x006a5e40
LAB_0070da3a:
0070DA3A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070DA3D  46                        INC ESI
0070DA3E  3B F0                     CMP ESI,EAX
0070DA40  7C B6                     JL 0x0070d9f8
LAB_0070da42:
0070DA42  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0070DA45  85 C0                     TEST EAX,EAX
0070DA47  74 75                     JZ 0x0070dabe
0070DA49  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070DA4C  85 C9                     TEST ECX,ECX
0070DA4E  74 6E                     JZ 0x0070dabe
0070DA50  83 39 FF                  CMP dword ptr [ECX],-0x1
0070DA53  74 69                     JZ 0x0070dabe
0070DA55  8B D1                     MOV EDX,ECX
0070DA57  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0070da5a:
0070DA5A  8B 02                     MOV EAX,dword ptr [EDX]
0070DA5C  66 8B 12                  MOV DX,word ptr [EDX]
0070DA5F  C1 E8 10                  SHR EAX,0x10
0070DA62  66 3B C2                  CMP AX,DX
0070DA65  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0070DA68  77 44                     JA 0x0070daae
0070DA6A  8B F0                     MOV ESI,EAX
LAB_0070da6c:
0070DA6C  6A 01                     PUSH 0x1
0070DA6E  56                        PUSH ESI
0070DA6F  53                        PUSH EBX
0070DA70  E8 BB 05 00 00            CALL 0x0070e030
0070DA75  83 C4 0C                  ADD ESP,0xc
0070DA78  85 FF                     TEST EDI,EDI
0070DA7A  74 28                     JZ 0x0070daa4
0070DA7C  53                        PUSH EBX
0070DA7D  FF D7                     CALL EDI
0070DA7F  83 C4 04                  ADD ESP,0x4
0070DA82  85 C0                     TEST EAX,EAX
0070DA84  74 1E                     JZ 0x0070daa4
0070DA86  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070DA8C  68 98 01 00 00            PUSH 0x198
0070DA91  68 90 01 7F 00            PUSH 0x7f0190
0070DA96  51                        PUSH ECX
0070DA97  50                        PUSH EAX
0070DA98  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070DA9F  E8 9C 83 F9 FF            CALL 0x006a5e40
LAB_0070daa4:
0070DAA4  46                        INC ESI
0070DAA5  66 3B 75 EC               CMP SI,word ptr [EBP + -0x14]
0070DAA9  76 C1                     JBE 0x0070da6c
0070DAAB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0070daae:
0070DAAE  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0070DAB1  83 C1 04                  ADD ECX,0x4
0070DAB4  83 F8 FF                  CMP EAX,-0x1
0070DAB7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0070DABA  8B D1                     MOV EDX,ECX
0070DABC  75 9C                     JNZ 0x0070da5a
LAB_0070dabe:
0070DABE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070DAC1  85 C0                     TEST EAX,EAX
0070DAC3  74 64                     JZ 0x0070db29
0070DAC5  F6 45 30 04               TEST byte ptr [EBP + 0x30],0x4
0070DAC9  74 5E                     JZ 0x0070db29
0070DACB  8A 08                     MOV CL,byte ptr [EAX]
0070DACD  8B F0                     MOV ESI,EAX
0070DACF  84 C9                     TEST CL,CL
0070DAD1  74 56                     JZ 0x0070db29
LAB_0070dad3:
0070DAD3  8A 16                     MOV DL,byte ptr [ESI]
0070DAD5  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070DADC  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
0070DADF  66 83 7D F4 20            CMP word ptr [EBP + -0xc],0x20
0070DAE4  72 3B                     JC 0x0070db21
0070DAE6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070DAE9  6A 01                     PUSH 0x1
0070DAEB  50                        PUSH EAX
0070DAEC  53                        PUSH EBX
0070DAED  E8 3E 05 00 00            CALL 0x0070e030
0070DAF2  83 C4 0C                  ADD ESP,0xc
0070DAF5  85 FF                     TEST EDI,EDI
0070DAF7  74 28                     JZ 0x0070db21
0070DAF9  53                        PUSH EBX
0070DAFA  FF D7                     CALL EDI
0070DAFC  83 C4 04                  ADD ESP,0x4
0070DAFF  85 C0                     TEST EAX,EAX
0070DB01  74 1E                     JZ 0x0070db21
0070DB03  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070DB09  68 A7 01 00 00            PUSH 0x1a7
0070DB0E  68 90 01 7F 00            PUSH 0x7f0190
0070DB13  51                        PUSH ECX
0070DB14  50                        PUSH EAX
0070DB15  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0070DB1C  E8 1F 83 F9 FF            CALL 0x006a5e40
LAB_0070db21:
0070DB21  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0070DB24  46                        INC ESI
0070DB25  84 C0                     TEST AL,AL
0070DB27  75 AA                     JNZ 0x0070dad3
LAB_0070db29:
0070DB29  8B 8B 99 01 00 00         MOV ECX,dword ptr [EBX + 0x199]
0070DB2F  8D 83 99 01 00 00         LEA EAX,[EBX + 0x199]
0070DB35  85 C9                     TEST ECX,ECX
0070DB37  74 06                     JZ 0x0070db3f
0070DB39  50                        PUSH EAX
0070DB3A  E8 21 D5 F9 FF            CALL 0x006ab060
LAB_0070db3f:
0070DB3F  F6 45 30 08               TEST byte ptr [EBP + 0x30],0x8
0070DB43  0F 85 00 01 00 00         JNZ 0x0070dc49
0070DB49  8B 83 11 01 00 00         MOV EAX,dword ptr [EBX + 0x111]
0070DB4F  8B 3D 78 BA 85 00         MOV EDI,dword ptr [0x0085ba78]
0070DB55  33 F6                     XOR ESI,ESI
0070DB57  3B C6                     CMP EAX,ESI
0070DB59  74 09                     JZ 0x0070db64
0070DB5B  50                        PUSH EAX
0070DB5C  FF D7                     CALL EDI
0070DB5E  89 B3 11 01 00 00         MOV dword ptr [EBX + 0x111],ESI
LAB_0070db64:
0070DB64  8B 8B 2D 01 00 00         MOV ECX,dword ptr [EBX + 0x12d]
0070DB6A  8D 83 2D 01 00 00         LEA EAX,[EBX + 0x12d]
0070DB70  3B CE                     CMP ECX,ESI
0070DB72  74 06                     JZ 0x0070db7a
0070DB74  50                        PUSH EAX
0070DB75  E8 E6 D4 F9 FF            CALL 0x006ab060
LAB_0070db7a:
0070DB7A  8B 83 09 01 00 00         MOV EAX,dword ptr [EBX + 0x109]
0070DB80  3B C6                     CMP EAX,ESI
0070DB82  74 09                     JZ 0x0070db8d
0070DB84  50                        PUSH EAX
0070DB85  FF D7                     CALL EDI
0070DB87  89 B3 09 01 00 00         MOV dword ptr [EBX + 0x109],ESI
LAB_0070db8d:
0070DB8D  39 B3 01 01 00 00         CMP dword ptr [EBX + 0x101],ESI
0070DB93  74 27                     JZ 0x0070dbbc
0070DB95  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070DB9B  3B C6                     CMP EAX,ESI
0070DB9D  74 0E                     JZ 0x0070dbad
0070DB9F  8B 93 05 01 00 00         MOV EDX,dword ptr [EBX + 0x105]
0070DBA5  52                        PUSH EDX
0070DBA6  50                        PUSH EAX
0070DBA7  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_0070dbad:
0070DBAD  8B 83 01 01 00 00         MOV EAX,dword ptr [EBX + 0x101]
0070DBB3  50                        PUSH EAX
0070DBB4  FF D7                     CALL EDI
0070DBB6  89 B3 01 01 00 00         MOV dword ptr [EBX + 0x101],ESI
LAB_0070dbbc:
0070DBBC  39 B3 15 01 00 00         CMP dword ptr [EBX + 0x115],ESI
0070DBC2  74 28                     JZ 0x0070dbec
0070DBC4  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070DBCA  3B C6                     CMP EAX,ESI
0070DBCC  74 0F                     JZ 0x0070dbdd
0070DBCE  8B 8B 19 01 00 00         MOV ECX,dword ptr [EBX + 0x119]
0070DBD4  56                        PUSH ESI
0070DBD5  51                        PUSH ECX
0070DBD6  50                        PUSH EAX
0070DBD7  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
LAB_0070dbdd:
0070DBDD  8B 93 15 01 00 00         MOV EDX,dword ptr [EBX + 0x115]
0070DBE3  52                        PUSH EDX
0070DBE4  FF D7                     CALL EDI
0070DBE6  89 B3 15 01 00 00         MOV dword ptr [EBX + 0x115],ESI
LAB_0070dbec:
0070DBEC  39 B3 1D 01 00 00         CMP dword ptr [EBX + 0x11d],ESI
0070DBF2  74 27                     JZ 0x0070dc1b
0070DBF4  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070DBFA  3B C6                     CMP EAX,ESI
0070DBFC  74 0E                     JZ 0x0070dc0c
0070DBFE  8B 8B 21 01 00 00         MOV ECX,dword ptr [EBX + 0x121]
0070DC04  51                        PUSH ECX
0070DC05  50                        PUSH EAX
0070DC06  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_0070dc0c:
0070DC0C  8B 93 1D 01 00 00         MOV EDX,dword ptr [EBX + 0x11d]
0070DC12  52                        PUSH EDX
0070DC13  FF D7                     CALL EDI
0070DC15  89 B3 1D 01 00 00         MOV dword ptr [EBX + 0x11d],ESI
LAB_0070dc1b:
0070DC1B  8B 83 FD 00 00 00         MOV EAX,dword ptr [EBX + 0xfd]
0070DC21  3B C6                     CMP EAX,ESI
0070DC23  74 0E                     JZ 0x0070dc33
0070DC25  50                        PUSH EAX
0070DC26  56                        PUSH ESI
0070DC27  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
0070DC2D  89 B3 FD 00 00 00         MOV dword ptr [EBX + 0xfd],ESI
LAB_0070dc33:
0070DC33  8B 8B 25 01 00 00         MOV ECX,dword ptr [EBX + 0x125]
0070DC39  8D 83 25 01 00 00         LEA EAX,[EBX + 0x125]
0070DC3F  3B CE                     CMP ECX,ESI
0070DC41  74 06                     JZ 0x0070dc49
0070DC43  50                        PUSH EAX
0070DC44  E8 17 D4 F9 FF            CALL 0x006ab060
LAB_0070dc49:
0070DC49  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0070DC4C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070DC51  8B C3                     MOV EAX,EBX
0070DC53  5F                        POP EDI
0070DC54  5E                        POP ESI
0070DC55  5B                        POP EBX
0070DC56  8B E5                     MOV ESP,EBP
0070DC58  5D                        POP EBP
0070DC59  C3                        RET
LAB_0070dc5a:
0070DC5A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0070DC5D  33 F6                     XOR ESI,ESI
0070DC5F  8B C1                     MOV EAX,ECX
0070DC61  99                        CDQ
0070DC62  33 C2                     XOR EAX,EDX
0070DC64  2B C2                     SUB EAX,EDX
0070DC66  3B CE                     CMP ECX,ESI
0070DC68  89 83 51 01 00 00         MOV dword ptr [EBX + 0x151],EAX
0070DC6E  7D 10                     JGE 0x0070dc80
0070DC70  F7 D9                     NEG ECX
0070DC72  89 8B 41 01 00 00         MOV dword ptr [EBX + 0x141],ECX
0070DC78  89 B3 49 01 00 00         MOV dword ptr [EBX + 0x149],ESI
0070DC7E  EB 0C                     JMP 0x0070dc8c
LAB_0070dc80:
0070DC80  89 B3 41 01 00 00         MOV dword ptr [EBX + 0x141],ESI
0070DC86  89 8B 49 01 00 00         MOV dword ptr [EBX + 0x149],ECX
LAB_0070dc8c:
0070DC8C  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
0070DC8F  8B C1                     MOV EAX,ECX
0070DC91  99                        CDQ
0070DC92  33 C2                     XOR EAX,EDX
0070DC94  2B C2                     SUB EAX,EDX
0070DC96  3B CE                     CMP ECX,ESI
0070DC98  89 83 55 01 00 00         MOV dword ptr [EBX + 0x155],EAX
0070DC9E  7D 13                     JGE 0x0070dcb3
0070DCA0  F7 D9                     NEG ECX
0070DCA2  89 8B 45 01 00 00         MOV dword ptr [EBX + 0x145],ECX
0070DCA8  89 B3 4D 01 00 00         MOV dword ptr [EBX + 0x14d],ESI
0070DCAE  E9 D2 F7 FF FF            JMP 0x0070d485
LAB_0070dcb3:
0070DCB3  89 B3 45 01 00 00         MOV dword ptr [EBX + 0x145],ESI
0070DCB9  89 8B 4D 01 00 00         MOV dword ptr [EBX + 0x14d],ECX
0070DCBF  E9 C1 F7 FF FF            JMP 0x0070d485
LAB_0070dcc4:
0070DCC4  3D 00 00 80 00            CMP EAX,0x800000
0070DCC9  74 0B                     JZ 0x0070dcd6
0070DCCB  3D 00 00 00 01            CMP EAX,0x1000000
0070DCD0  0F 85 AD F7 FF FF         JNZ 0x0070d483
LAB_0070dcd6:
0070DCD6  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0070DCD9  33 F6                     XOR ESI,ESI
0070DCDB  3B C6                     CMP EAX,ESI
0070DCDD  7E 05                     JLE 0x0070dce4
0070DCDF  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
0070DCE2  EB 02                     JMP 0x0070dce6
LAB_0070dce4:
0070DCE4  33 C9                     XOR ECX,ECX
LAB_0070dce6:
0070DCE6  89 8B 51 01 00 00         MOV dword ptr [EBX + 0x151],ECX
0070DCEC  33 C9                     XOR ECX,ECX
0070DCEE  3B C6                     CMP EAX,ESI
0070DCF0  0F 9E C1                  SETLE CL
0070DCF3  49                        DEC ECX
0070DCF4  23 C8                     AND ECX,EAX
0070DCF6  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0070DCF9  89 8B 41 01 00 00         MOV dword ptr [EBX + 0x141],ECX
0070DCFF  3B C6                     CMP EAX,ESI
0070DD01  89 B3 49 01 00 00         MOV dword ptr [EBX + 0x149],ESI
0070DD07  7E 05                     JLE 0x0070dd0e
0070DD09  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
0070DD0C  EB 02                     JMP 0x0070dd10
LAB_0070dd0e:
0070DD0E  33 C9                     XOR ECX,ECX
LAB_0070dd10:
0070DD10  33 D2                     XOR EDX,EDX
0070DD12  3B C6                     CMP EAX,ESI
0070DD14  0F 9E C2                  SETLE DL
0070DD17  4A                        DEC EDX
0070DD18  89 8B 55 01 00 00         MOV dword ptr [EBX + 0x155],ECX
0070DD1E  23 D0                     AND EDX,EAX
0070DD20  89 93 45 01 00 00         MOV dword ptr [EBX + 0x145],EDX
0070DD26  89 B3 4D 01 00 00         MOV dword ptr [EBX + 0x14d],ESI
0070DD2C  E9 54 F7 FF FF            JMP 0x0070d485
LAB_0070dd31:
0070DD31  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070DD34  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0070DD37  3B C7                     CMP EAX,EDI
0070DD39  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070DD3F  75 23                     JNZ 0x0070dd64
0070DD41  68 A8 01 7F 00            PUSH 0x7f01a8
0070DD46  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070DD4B  53                        PUSH EBX
0070DD4C  57                        PUSH EDI
0070DD4D  68 B9 01 00 00            PUSH 0x1b9
0070DD52  68 90 01 7F 00            PUSH 0x7f0190
0070DD57  E8 74 F7 F9 FF            CALL 0x006ad4d0
0070DD5C  83 C4 18                  ADD ESP,0x18
0070DD5F  85 C0                     TEST EAX,EAX
0070DD61  74 01                     JZ 0x0070dd64
0070DD63  CC                        INT3
LAB_0070dd64:
0070DD64  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0070DD67  3B F7                     CMP ESI,EDI
0070DD69  0F 84 75 01 00 00         JZ 0x0070dee4
0070DD6F  8B 8E 99 01 00 00         MOV ECX,dword ptr [ESI + 0x199]
0070DD75  8D 86 99 01 00 00         LEA EAX,[ESI + 0x199]
0070DD7B  3B CF                     CMP ECX,EDI
0070DD7D  74 06                     JZ 0x0070dd85
0070DD7F  50                        PUSH EAX
0070DD80  E8 DB D2 F9 FF            CALL 0x006ab060
LAB_0070dd85:
0070DD85  8B 86 11 01 00 00         MOV EAX,dword ptr [ESI + 0x111]
0070DD8B  8B 1D 78 BA 85 00         MOV EBX,dword ptr [0x0085ba78]
0070DD91  3B C7                     CMP EAX,EDI
0070DD93  74 09                     JZ 0x0070dd9e
0070DD95  50                        PUSH EAX
0070DD96  FF D3                     CALL EBX
0070DD98  89 BE 11 01 00 00         MOV dword ptr [ESI + 0x111],EDI
LAB_0070dd9e:
0070DD9E  8B 8E 2D 01 00 00         MOV ECX,dword ptr [ESI + 0x12d]
0070DDA4  8D 86 2D 01 00 00         LEA EAX,[ESI + 0x12d]
0070DDAA  3B CF                     CMP ECX,EDI
0070DDAC  74 06                     JZ 0x0070ddb4
0070DDAE  50                        PUSH EAX
0070DDAF  E8 AC D2 F9 FF            CALL 0x006ab060
LAB_0070ddb4:
0070DDB4  8B 86 09 01 00 00         MOV EAX,dword ptr [ESI + 0x109]
0070DDBA  3B C7                     CMP EAX,EDI
0070DDBC  74 09                     JZ 0x0070ddc7
0070DDBE  50                        PUSH EAX
0070DDBF  FF D3                     CALL EBX
0070DDC1  89 BE 09 01 00 00         MOV dword ptr [ESI + 0x109],EDI
LAB_0070ddc7:
0070DDC7  39 BE 01 01 00 00         CMP dword ptr [ESI + 0x101],EDI
0070DDCD  74 27                     JZ 0x0070ddf6
0070DDCF  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
0070DDD5  3B C7                     CMP EAX,EDI
0070DDD7  74 0E                     JZ 0x0070dde7
0070DDD9  8B 96 05 01 00 00         MOV EDX,dword ptr [ESI + 0x105]
0070DDDF  52                        PUSH EDX
0070DDE0  50                        PUSH EAX
0070DDE1  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_0070dde7:
0070DDE7  8B 86 01 01 00 00         MOV EAX,dword ptr [ESI + 0x101]
0070DDED  50                        PUSH EAX
0070DDEE  FF D3                     CALL EBX
0070DDF0  89 BE 01 01 00 00         MOV dword ptr [ESI + 0x101],EDI
LAB_0070ddf6:
0070DDF6  39 BE 15 01 00 00         CMP dword ptr [ESI + 0x115],EDI
0070DDFC  74 28                     JZ 0x0070de26
0070DDFE  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
0070DE04  3B C7                     CMP EAX,EDI
0070DE06  74 0F                     JZ 0x0070de17
0070DE08  8B 8E 19 01 00 00         MOV ECX,dword ptr [ESI + 0x119]
0070DE0E  57                        PUSH EDI
0070DE0F  51                        PUSH ECX
0070DE10  50                        PUSH EAX
0070DE11  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
LAB_0070de17:
0070DE17  8B 96 15 01 00 00         MOV EDX,dword ptr [ESI + 0x115]
0070DE1D  52                        PUSH EDX
0070DE1E  FF D3                     CALL EBX
0070DE20  89 BE 15 01 00 00         MOV dword ptr [ESI + 0x115],EDI
LAB_0070de26:
0070DE26  39 BE 1D 01 00 00         CMP dword ptr [ESI + 0x11d],EDI
0070DE2C  74 27                     JZ 0x0070de55
0070DE2E  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
0070DE34  3B C7                     CMP EAX,EDI
0070DE36  74 0E                     JZ 0x0070de46
0070DE38  8B 8E 21 01 00 00         MOV ECX,dword ptr [ESI + 0x121]
0070DE3E  51                        PUSH ECX
0070DE3F  50                        PUSH EAX
0070DE40  FF 15 90 BA 85 00         CALL dword ptr [0x0085ba90]
LAB_0070de46:
0070DE46  8B 96 1D 01 00 00         MOV EDX,dword ptr [ESI + 0x11d]
0070DE4C  52                        PUSH EDX
0070DE4D  FF D3                     CALL EBX
0070DE4F  89 BE 1D 01 00 00         MOV dword ptr [ESI + 0x11d],EDI
LAB_0070de55:
0070DE55  8B 86 FD 00 00 00         MOV EAX,dword ptr [ESI + 0xfd]
0070DE5B  3B C7                     CMP EAX,EDI
0070DE5D  74 0E                     JZ 0x0070de6d
0070DE5F  50                        PUSH EAX
0070DE60  57                        PUSH EDI
0070DE61  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
0070DE67  89 BE FD 00 00 00         MOV dword ptr [ESI + 0xfd],EDI
LAB_0070de6d:
0070DE6D  8B 8E 25 01 00 00         MOV ECX,dword ptr [ESI + 0x125]
0070DE73  8D 86 25 01 00 00         LEA EAX,[ESI + 0x125]
0070DE79  3B CF                     CMP ECX,EDI
0070DE7B  74 06                     JZ 0x0070de83
0070DE7D  50                        PUSH EAX
0070DE7E  E8 DD D1 F9 FF            CALL 0x006ab060
LAB_0070de83:
0070DE83  8B 86 9A 00 00 00         MOV EAX,dword ptr [ESI + 0x9a]
0070DE89  66 39 38                  CMP word ptr [EAX],DI
0070DE8C  7E 1F                     JLE 0x0070dead
0070DE8E  8D 5E 04                  LEA EBX,[ESI + 0x4]
LAB_0070de91:
0070DE91  83 3B 00                  CMP dword ptr [EBX],0x0
0070DE94  74 06                     JZ 0x0070de9c
0070DE96  53                        PUSH EBX
0070DE97  E8 C4 D1 F9 FF            CALL 0x006ab060
LAB_0070de9c:
0070DE9C  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
0070DEA2  47                        INC EDI
0070DEA3  83 C3 04                  ADD EBX,0x4
0070DEA6  0F BF 11                  MOVSX EDX,word ptr [ECX]
0070DEA9  3B FA                     CMP EDI,EDX
0070DEAB  7C E4                     JL 0x0070de91
LAB_0070dead:
0070DEAD  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
0070DEB3  8D 86 9A 00 00 00         LEA EAX,[ESI + 0x9a]
0070DEB9  33 FF                     XOR EDI,EDI
0070DEBB  3B CF                     CMP ECX,EDI
0070DEBD  74 06                     JZ 0x0070dec5
0070DEBF  50                        PUSH EAX
0070DEC0  E8 9B D1 F9 FF            CALL 0x006ab060
LAB_0070dec5:
0070DEC5  8B 8E 85 01 00 00         MOV ECX,dword ptr [ESI + 0x185]
0070DECB  8D 86 85 01 00 00         LEA EAX,[ESI + 0x185]
0070DED1  3B CF                     CMP ECX,EDI
0070DED3  74 06                     JZ 0x0070dedb
0070DED5  50                        PUSH EAX
0070DED6  E8 85 D1 F9 FF            CALL 0x006ab060
LAB_0070dedb:
0070DEDB  56                        PUSH ESI
0070DEDC  E8 AF 7F F9 FF            CALL 0x006a5e90
0070DEE1  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_0070dee4:
0070DEE4  68 CC 01 00 00            PUSH 0x1cc
0070DEE9  68 90 01 7F 00            PUSH 0x7f0190
0070DEEE  57                        PUSH EDI
0070DEEF  53                        PUSH EBX
0070DEF0  E8 4B 7F F9 FF            CALL 0x006a5e40
0070DEF5  5F                        POP EDI
0070DEF6  5E                        POP ESI
0070DEF7  33 C0                     XOR EAX,EAX
0070DEF9  5B                        POP EBX
0070DEFA  8B E5                     MOV ESP,EBP
0070DEFC  5D                        POP EBP
0070DEFD  C3                        RET
