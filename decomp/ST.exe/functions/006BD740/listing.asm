FUN_006bd740:
006BD740  55                        PUSH EBP
006BD741  8B EC                     MOV EBP,ESP
006BD743  6A FF                     PUSH -0x1
006BD745  68 50 D9 79 00            PUSH 0x79d950
006BD74A  68 64 D9 72 00            PUSH 0x72d964
006BD74F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006BD755  50                        PUSH EAX
006BD756  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006BD75D  81 EC 94 00 00 00         SUB ESP,0x94
006BD763  53                        PUSH EBX
006BD764  56                        PUSH ESI
006BD765  57                        PUSH EDI
006BD766  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BD769  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006BD76C  89 0D D4 4F 85 00         MOV dword ptr [0x00854fd4],ECX
006BD772  33 FF                     XOR EDI,EDI
006BD774  89 3D E4 4F 85 00         MOV dword ptr [0x00854fe4],EDI
006BD77A  8B 01                     MOV EAX,dword ptr [ECX]
006BD77C  A3 E8 4E 85 00            MOV [0x00854ee8],EAX
006BD781  39 B9 B4 01 00 00         CMP dword ptr [ECX + 0x1b4],EDI
006BD787  0F 84 94 12 00 00         JZ 0x006bea21
006BD78D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BD790  F6 C5 01                  TEST CH,0x1
006BD793  0F 85 88 12 00 00         JNZ 0x006bea21
006BD799  39 78 40                  CMP dword ptr [EAX + 0x40],EDI
006BD79C  0F 84 7F 12 00 00         JZ 0x006bea21
006BD7A2  39 78 44                  CMP dword ptr [EAX + 0x44],EDI
006BD7A5  0F 84 76 12 00 00         JZ 0x006bea21
006BD7AB  39 B8 08 05 00 00         CMP dword ptr [EAX + 0x508],EDI
006BD7B1  74 11                     JZ 0x006bd7c4
006BD7B3  05 F0 04 00 00            ADD EAX,0x4f0
006BD7B8  50                        PUSH EAX
006BD7B9  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006BD7BF  A1 E8 4E 85 00            MOV EAX,[0x00854ee8]
LAB_006bd7c4:
006BD7C4  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006BD7CB  74 0C                     JZ 0x006bd7d9
006BD7CD  05 F0 04 00 00            ADD EAX,0x4f0
006BD7D2  50                        PUSH EAX
006BD7D3  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006bd7d9:
006BD7D9  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD7DE  89 B8 B4 01 00 00         MOV dword ptr [EAX + 0x1b4],EDI
006BD7E4  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BD7EA  8B 91 C0 01 00 00         MOV EDX,dword ptr [ECX + 0x1c0]
006BD7F0  89 3A                     MOV dword ptr [EDX],EDI
006BD7F2  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD7F7  8B 88 C0 01 00 00         MOV ECX,dword ptr [EAX + 0x1c0]
006BD7FD  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
006BD800  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD805  8B 90 A0 01 00 00         MOV EDX,dword ptr [EAX + 0x1a0]
006BD80B  89 15 A0 4F 85 00         MOV dword ptr [0x00854fa0],EDX
006BD811  8B 88 AC 01 00 00         MOV ECX,dword ptr [EAX + 0x1ac]
006BD817  89 0D C0 4F 85 00         MOV dword ptr [0x00854fc0],ECX
006BD81D  8B 90 D8 01 00 00         MOV EDX,dword ptr [EAX + 0x1d8]
006BD823  0B 90 B8 01 00 00         OR EDX,dword ptr [EAX + 0x1b8]
006BD829  89 15 98 4F 85 00         MOV dword ptr [0x00854f98],EDX
006BD82F  E8 FC ED FF FF            CALL 0x006bc630
006BD834  89 3D 94 4F 85 00         MOV dword ptr [0x00854f94],EDI
006BD83A  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BD840  39 BE DC 01 00 00         CMP dword ptr [ESI + 0x1dc],EDI
006BD846  0F 84 83 04 00 00         JZ 0x006bdccf
006BD84C  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006BD852  8B C8                     MOV ECX,EAX
006BD854  C1 E1 04                  SHL ECX,0x4
006BD857  8B 5C 31 14               MOV EBX,dword ptr [ECX + ESI*0x1 + 0x14]
006BD85B  2B 9C C6 1C 01 00 00      SUB EBX,dword ptr [ESI + EAX*0x8 + 0x11c]
006BD862  89 1D 4C 4F 85 00         MOV dword ptr [0x00854f4c],EBX
006BD868  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006BD86E  8B D0                     MOV EDX,EAX
006BD870  C1 E2 04                  SHL EDX,0x4
006BD873  8B 4C 32 18               MOV ECX,dword ptr [EDX + ESI*0x1 + 0x18]
006BD877  2B 8C C6 20 01 00 00      SUB ECX,dword ptr [ESI + EAX*0x8 + 0x120]
006BD87E  89 0D 48 4F 85 00         MOV dword ptr [0x00854f48],ECX
006BD884  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006BD88A  C1 E0 04                  SHL EAX,0x4
006BD88D  8D 3C 30                  LEA EDI,[EAX + ESI*0x1]
006BD890  8B C3                     MOV EAX,EBX
006BD892  99                        CDQ
006BD893  F7 BE EC 01 00 00         IDIV dword ptr [ESI + 0x1ec]
006BD899  8B CA                     MOV ECX,EDX
006BD89B  2B 4F 14                  SUB ECX,dword ptr [EDI + 0x14]
006BD89E  03 4F 1C                  ADD ECX,dword ptr [EDI + 0x1c]
006BD8A1  89 0D A8 4F 85 00         MOV dword ptr [0x00854fa8],ECX
006BD8A7  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006BD8AD  8D 50 02                  LEA EDX,[EAX + 0x2]
006BD8B0  C1 E2 04                  SHL EDX,0x4
006BD8B3  C1 E0 04                  SHL EAX,0x4
006BD8B6  8B 3C 32                  MOV EDI,dword ptr [EDX + ESI*0x1]
006BD8B9  2B 7C 30 18               SUB EDI,dword ptr [EAX + ESI*0x1 + 0x18]
006BD8BD  A1 48 4F 85 00            MOV EAX,[0x00854f48]
006BD8C2  99                        CDQ
006BD8C3  F7 BE F0 01 00 00         IDIV dword ptr [ESI + 0x1f0]
006BD8C9  03 FA                     ADD EDI,EDX
006BD8CB  89 3D A4 4F 85 00         MOV dword ptr [0x00854fa4],EDI
006BD8D1  8B C3                     MOV EAX,EBX
006BD8D3  99                        CDQ
006BD8D4  F7 BE EC 01 00 00         IDIV dword ptr [ESI + 0x1ec]
006BD8DA  A3 4C 4F 85 00            MOV [0x00854f4c],EAX
006BD8DF  A1 48 4F 85 00            MOV EAX,[0x00854f48]
006BD8E4  99                        CDQ
006BD8E5  F7 BE F0 01 00 00         IDIV dword ptr [ESI + 0x1f0]
006BD8EB  8B D8                     MOV EBX,EAX
006BD8ED  89 1D 48 4F 85 00         MOV dword ptr [0x00854f48],EBX
006BD8F3  8B C1                     MOV EAX,ECX
006BD8F5  99                        CDQ
006BD8F6  F7 BE EC 01 00 00         IDIV dword ptr [ESI + 0x1ec]
006BD8FC  A3 A8 4F 85 00            MOV [0x00854fa8],EAX
006BD901  8B C7                     MOV EAX,EDI
006BD903  99                        CDQ
006BD904  F7 BE F0 01 00 00         IDIV dword ptr [ESI + 0x1f0]
006BD90A  8B F8                     MOV EDI,EAX
006BD90C  89 3D A4 4F 85 00         MOV dword ptr [0x00854fa4],EDI
006BD912  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BD918  83 C0 07                  ADD EAX,0x7
006BD91B  99                        CDQ
006BD91C  83 E2 07                  AND EDX,0x7
006BD91F  03 C2                     ADD EAX,EDX
006BD921  C1 F8 03                  SAR EAX,0x3
006BD924  A3 C4 4F 85 00            MOV [0x00854fc4],EAX
006BD929  8B C8                     MOV ECX,EAX
006BD92B  0F AF CB                  IMUL ECX,EBX
006BD92E  8B 96 10 02 00 00         MOV EDX,dword ptr [ESI + 0x210]
006BD934  03 D1                     ADD EDX,ECX
006BD936  89 15 40 4F 85 00         MOV dword ptr [0x00854f40],EDX
006BD93C  8B 96 20 02 00 00         MOV EDX,dword ptr [ESI + 0x220]
006BD942  03 D1                     ADD EDX,ECX
006BD944  89 15 CC 4F 85 00         MOV dword ptr [0x00854fcc],EDX
006BD94A  C7 05 E4 4E 85 00 00 00 00 00  MOV dword ptr [0x00854ee4],0x0
006BD954  85 FF                     TEST EDI,EDI
006BD956  0F 8E A8 01 00 00         JLE 0x006bdb04
LAB_006bd95c:
006BD95C  33 C9                     XOR ECX,ECX
006BD95E  89 0D E0 4E 85 00         MOV dword ptr [0x00854ee0],ECX
006BD964  8B 15 A8 4F 85 00         MOV EDX,dword ptr [0x00854fa8]
006BD96A  85 D2                     TEST EDX,EDX
006BD96C  0F 8E 65 01 00 00         JLE 0x006bdad7
006BD972  BE 01 00 00 00            MOV ESI,0x1
LAB_006bd977:
006BD977  A1 4C 4F 85 00            MOV EAX,[0x00854f4c]
006BD97C  03 C8                     ADD ECX,EAX
006BD97E  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
006BD984  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
006BD98A  8B 0D 40 4F 85 00         MOV ECX,dword ptr [0x00854f40]
006BD990  80 F2 07                  XOR DL,0x7
006BD993  33 C0                     XOR EAX,EAX
006BD995  0F A3 11                  BT [ECX],EDX
006BD998  D0 D0                     RCL AL,0x1
006BD99A  85 C0                     TEST EAX,EAX
006BD99C  75 32                     JNZ 0x006bd9d0
006BD99E  8B 0D 4C 4F 85 00         MOV ECX,dword ptr [0x00854f4c]
006BD9A4  8B 15 E0 4E 85 00         MOV EDX,dword ptr [0x00854ee0]
006BD9AA  03 D1                     ADD EDX,ECX
006BD9AC  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
006BD9B2  8B 95 6C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff6c]
006BD9B8  8B 0D CC 4F 85 00         MOV ECX,dword ptr [0x00854fcc]
006BD9BE  80 F2 07                  XOR DL,0x7
006BD9C1  33 C0                     XOR EAX,EAX
006BD9C3  0F A3 11                  BT [ECX],EDX
006BD9C6  D0 D0                     RCL AL,0x1
006BD9C8  85 C0                     TEST EAX,EAX
006BD9CA  0F 84 E3 00 00 00         JZ 0x006bdab3
LAB_006bd9d0:
006BD9D0  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD9D5  8B 0D 4C 4F 85 00         MOV ECX,dword ptr [0x00854f4c]
006BD9DB  8B 15 E0 4E 85 00         MOV EDX,dword ptr [0x00854ee0]
006BD9E1  03 D1                     ADD EDX,ECX
006BD9E3  0F AF 90 EC 01 00 00      IMUL EDX,dword ptr [EAX + 0x1ec]
006BD9EA  8B 88 E4 01 00 00         MOV ECX,dword ptr [EAX + 0x1e4]
006BD9F0  03 94 C8 1C 01 00 00      ADD EDX,dword ptr [EAX + ECX*0x8 + 0x11c]
006BD9F7  89 15 78 4F 85 00         MOV dword ptr [0x00854f78],EDX
006BD9FD  8B 15 48 4F 85 00         MOV EDX,dword ptr [0x00854f48]
006BDA03  8B 0D E4 4E 85 00         MOV ECX,dword ptr [0x00854ee4]
006BDA09  03 CA                     ADD ECX,EDX
006BDA0B  0F AF 88 F0 01 00 00      IMUL ECX,dword ptr [EAX + 0x1f0]
006BDA12  8B 90 E4 01 00 00         MOV EDX,dword ptr [EAX + 0x1e4]
006BDA18  03 8C D0 20 01 00 00      ADD ECX,dword ptr [EAX + EDX*0x8 + 0x120]
006BDA1F  89 0D 7C 4F 85 00         MOV dword ptr [0x00854f7c],ECX
006BDA25  8B 88 EC 01 00 00         MOV ECX,dword ptr [EAX + 0x1ec]
006BDA2B  89 0D 80 4F 85 00         MOV dword ptr [0x00854f80],ECX
006BDA31  8B 90 F0 01 00 00         MOV EDX,dword ptr [EAX + 0x1f0]
006BDA37  89 15 84 4F 85 00         MOV dword ptr [0x00854f84],EDX
006BDA3D  8B 88 E4 01 00 00         MOV ECX,dword ptr [EAX + 0x1e4]
006BDA43  C1 E1 04                  SHL ECX,0x4
006BDA46  8D 54 01 14               LEA EDX,[ECX + EAX*0x1 + 0x14]
006BDA4A  52                        PUSH EDX
006BDA4B  68 78 4F 85 00            PUSH 0x854f78
006BDA50  68 F0 4E 85 00            PUSH 0x854ef0
006BDA55  E8 56 24 01 00            CALL 0x006cfeb0
006BDA5A  83 C4 0C                  ADD ESP,0xc
006BDA5D  85 C0                     TEST EAX,EAX
006BDA5F  74 52                     JZ 0x006bdab3
006BDA61  89 35 94 4F 85 00         MOV dword ptr [0x00854f94],ESI
006BDA67  56                        PUSH ESI
006BDA68  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BDA6D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BDA70  51                        PUSH ECX
006BDA71  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BDA74  52                        PUSH EDX
006BDA75  8B 0D FC 4E 85 00         MOV ECX,dword ptr [0x00854efc]
006BDA7B  51                        PUSH ECX
006BDA7C  8B 15 F8 4E 85 00         MOV EDX,dword ptr [0x00854ef8]
006BDA82  52                        PUSH EDX
006BDA83  8B 0D F4 4E 85 00         MOV ECX,dword ptr [0x00854ef4]
006BDA89  51                        PUSH ECX
006BDA8A  8B 15 F0 4E 85 00         MOV EDX,dword ptr [0x00854ef0]
006BDA90  52                        PUSH EDX
006BDA91  6A 64                     PUSH 0x64
006BDA93  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BDA99  50                        PUSH EAX
006BDA9A  E8 31 40 01 00            CALL 0x006d1ad0
006BDA9F  83 F8 FF                  CMP EAX,-0x1
006BDAA2  75 06                     JNZ 0x006bdaaa
006BDAA4  89 35 98 4F 85 00         MOV dword ptr [0x00854f98],ESI
LAB_006bdaaa:
006BDAAA  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BDAAF  85 C0                     TEST EAX,EAX
006BDAB1  75 19                     JNZ 0x006bdacc
LAB_006bdab3:
006BDAB3  8B 0D E0 4E 85 00         MOV ECX,dword ptr [0x00854ee0]
006BDAB9  41                        INC ECX
006BDABA  89 0D E0 4E 85 00         MOV dword ptr [0x00854ee0],ECX
006BDAC0  3B 0D A8 4F 85 00         CMP ECX,dword ptr [0x00854fa8]
006BDAC6  0F 8C AB FE FF FF         JL 0x006bd977
LAB_006bdacc:
006BDACC  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDAD2  A1 C4 4F 85 00            MOV EAX,[0x00854fc4]
LAB_006bdad7:
006BDAD7  01 05 40 4F 85 00         ADD dword ptr [0x00854f40],EAX
006BDADD  01 05 CC 4F 85 00         ADD dword ptr [0x00854fcc],EAX
006BDAE3  8B 0D E4 4E 85 00         MOV ECX,dword ptr [0x00854ee4]
006BDAE9  41                        INC ECX
006BDAEA  89 0D E4 4E 85 00         MOV dword ptr [0x00854ee4],ECX
006BDAF0  8B 3D A4 4F 85 00         MOV EDI,dword ptr [0x00854fa4]
006BDAF6  3B CF                     CMP ECX,EDI
006BDAF8  0F 8C 5E FE FF FF         JL 0x006bd95c
006BDAFE  8B 1D 48 4F 85 00         MOV EBX,dword ptr [0x00854f48]
LAB_006bdb04:
006BDB04  A1 94 4F 85 00            MOV EAX,[0x00854f94]
006BDB09  85 C0                     TEST EAX,EAX
006BDB0B  0F 85 ED 00 00 00         JNZ 0x006bdbfe
006BDB11  8B 8E F4 01 00 00         MOV ECX,dword ptr [ESI + 0x1f4]
006BDB17  0F AF CB                  IMUL ECX,EBX
006BDB1A  8B 15 4C 4F 85 00         MOV EDX,dword ptr [0x00854f4c]
006BDB20  03 CA                     ADD ECX,EDX
006BDB22  03 8E 04 02 00 00         ADD ECX,dword ptr [ESI + 0x204]
006BDB28  89 0D 88 4F 85 00         MOV dword ptr [0x00854f88],ECX
006BDB2E  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BDB34  0F AF C3                  IMUL EAX,EBX
006BDB37  03 86 1C 02 00 00         ADD EAX,dword ptr [ESI + 0x21c]
006BDB3D  03 C2                     ADD EAX,EDX
006BDB3F  A3 18 4F 85 00            MOV [0x00854f18],EAX
006BDB44  C7 05 E4 4E 85 00 00 00 00 00  MOV dword ptr [0x00854ee4],0x0
006BDB4E  85 FF                     TEST EDI,EDI
006BDB50  0F 8E 9B 00 00 00         JLE 0x006bdbf1
LAB_006bdb56:
006BDB56  33 FF                     XOR EDI,EDI
006BDB58  89 3D E0 4E 85 00         MOV dword ptr [0x00854ee0],EDI
006BDB5E  8B 15 A8 4F 85 00         MOV EDX,dword ptr [0x00854fa8]
006BDB64  85 D2                     TEST EDX,EDX
006BDB66  7E 4F                     JLE 0x006bdbb7
LAB_006bdb68:
006BDB68  8B 96 04 02 00 00         MOV EDX,dword ptr [ESI + 0x204]
006BDB6E  85 D2                     TEST EDX,EDX
006BDB70  74 10                     JZ 0x006bdb82
006BDB72  33 D2                     XOR EDX,EDX
006BDB74  8A 14 39                  MOV DL,byte ptr [ECX + EDI*0x1]
006BDB77  8B 9E 00 02 00 00         MOV EBX,dword ptr [ESI + 0x200]
006BDB7D  4B                        DEC EBX
006BDB7E  3B D3                     CMP EDX,EBX
006BDB80  7C 2B                     JL 0x006bdbad
LAB_006bdb82:
006BDB82  8B 96 1C 02 00 00         MOV EDX,dword ptr [ESI + 0x21c]
006BDB88  85 D2                     TEST EDX,EDX
006BDB8A  74 10                     JZ 0x006bdb9c
006BDB8C  33 D2                     XOR EDX,EDX
006BDB8E  8A 14 38                  MOV DL,byte ptr [EAX + EDI*0x1]
006BDB91  8B 9E 18 02 00 00         MOV EBX,dword ptr [ESI + 0x218]
006BDB97  4B                        DEC EBX
006BDB98  3B D3                     CMP EDX,EBX
006BDB9A  7C 11                     JL 0x006bdbad
LAB_006bdb9c:
006BDB9C  47                        INC EDI
006BDB9D  89 3D E0 4E 85 00         MOV dword ptr [0x00854ee0],EDI
006BDBA3  3B 3D A8 4F 85 00         CMP EDI,dword ptr [0x00854fa8]
006BDBA9  7C BD                     JL 0x006bdb68
006BDBAB  EB 0A                     JMP 0x006bdbb7
LAB_006bdbad:
006BDBAD  C7 05 94 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f94],0x1
LAB_006bdbb7:
006BDBB7  8B 15 94 4F 85 00         MOV EDX,dword ptr [0x00854f94]
006BDBBD  85 D2                     TEST EDX,EDX
006BDBBF  75 30                     JNZ 0x006bdbf1
006BDBC1  03 8E F4 01 00 00         ADD ECX,dword ptr [ESI + 0x1f4]
006BDBC7  89 0D 88 4F 85 00         MOV dword ptr [0x00854f88],ECX
006BDBCD  03 86 F4 01 00 00         ADD EAX,dword ptr [ESI + 0x1f4]
006BDBD3  A3 18 4F 85 00            MOV [0x00854f18],EAX
006BDBD8  8B 3D E4 4E 85 00         MOV EDI,dword ptr [0x00854ee4]
006BDBDE  47                        INC EDI
006BDBDF  89 3D E4 4E 85 00         MOV dword ptr [0x00854ee4],EDI
006BDBE5  3B 3D A4 4F 85 00         CMP EDI,dword ptr [0x00854fa4]
006BDBEB  0F 8C 65 FF FF FF         JL 0x006bdb56
LAB_006bdbf1:
006BDBF1  A1 94 4F 85 00            MOV EAX,[0x00854f94]
006BDBF6  85 C0                     TEST EAX,EAX
006BDBF8  0F 84 03 02 00 00         JZ 0x006bde01
LAB_006bdbfe:
006BDBFE  8B 86 E4 01 00 00         MOV EAX,dword ptr [ESI + 0x1e4]
006BDC04  8B 8C 86 74 01 00 00      MOV ECX,dword ptr [ESI + EAX*0x4 + 0x174]
006BDC0B  85 C9                     TEST ECX,ECX
006BDC0D  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BDC13  74 52                     JZ 0x006bdc67
006BDC15  83 C0 07                  ADD EAX,0x7
006BDC18  99                        CDQ
006BDC19  83 E2 07                  AND EDX,0x7
006BDC1C  03 C2                     ADD EAX,EDX
006BDC1E  8B C8                     MOV ECX,EAX
006BDC20  C1 F9 03                  SAR ECX,0x3
006BDC23  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BDC2A  83 C8 FF                  OR EAX,0xffffffff
006BDC2D  8B BE 10 02 00 00         MOV EDI,dword ptr [ESI + 0x210]
006BDC33  8B D1                     MOV EDX,ECX
006BDC35  C1 E9 02                  SHR ECX,0x2
006BDC38  F3 AB                     STOSD.REP ES:EDI
006BDC3A  8B CA                     MOV ECX,EDX
006BDC3C  83 E1 03                  AND ECX,0x3
006BDC3F  F3 AA                     STOSB.REP ES:EDI
006BDC41  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDC47  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BDC4D  83 C0 07                  ADD EAX,0x7
006BDC50  99                        CDQ
006BDC51  83 E2 07                  AND EDX,0x7
006BDC54  03 C2                     ADD EAX,EDX
006BDC56  8B C8                     MOV ECX,EAX
006BDC58  C1 F9 03                  SAR ECX,0x3
006BDC5B  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BDC62  83 C8 FF                  OR EAX,0xffffffff
006BDC65  EB 4E                     JMP 0x006bdcb5
LAB_006bdc67:
006BDC67  83 C0 07                  ADD EAX,0x7
006BDC6A  99                        CDQ
006BDC6B  83 E2 07                  AND EDX,0x7
006BDC6E  03 C2                     ADD EAX,EDX
006BDC70  8B C8                     MOV ECX,EAX
006BDC72  C1 F9 03                  SAR ECX,0x3
006BDC75  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BDC7C  33 C0                     XOR EAX,EAX
006BDC7E  8B BE 10 02 00 00         MOV EDI,dword ptr [ESI + 0x210]
006BDC84  8B D1                     MOV EDX,ECX
006BDC86  C1 E9 02                  SHR ECX,0x2
006BDC89  F3 AB                     STOSD.REP ES:EDI
006BDC8B  8B CA                     MOV ECX,EDX
006BDC8D  83 E1 03                  AND ECX,0x3
006BDC90  F3 AA                     STOSB.REP ES:EDI
006BDC92  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDC98  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BDC9E  83 C0 07                  ADD EAX,0x7
006BDCA1  99                        CDQ
006BDCA2  83 E2 07                  AND EDX,0x7
006BDCA5  03 C2                     ADD EAX,EDX
006BDCA7  8B C8                     MOV ECX,EAX
006BDCA9  C1 F9 03                  SAR ECX,0x3
006BDCAC  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BDCB3  33 C0                     XOR EAX,EAX
LAB_006bdcb5:
006BDCB5  8B BE 20 02 00 00         MOV EDI,dword ptr [ESI + 0x220]
006BDCBB  8B D1                     MOV EDX,ECX
006BDCBD  C1 E9 02                  SHR ECX,0x2
006BDCC0  F3 AB                     STOSD.REP ES:EDI
006BDCC2  8B CA                     MOV ECX,EDX
006BDCC4  83 E1 03                  AND ECX,0x3
006BDCC7  F3 AA                     STOSB.REP ES:EDI
006BDCC9  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006bdccf:
006BDCCF  A1 94 4F 85 00            MOV EAX,[0x00854f94]
006BDCD4  85 C0                     TEST EAX,EAX
006BDCD6  0F 84 25 01 00 00         JZ 0x006bde01
006BDCDC  8B 86 BC 01 00 00         MOV EAX,dword ptr [ESI + 0x1bc]
006BDCE2  8B 08                     MOV ECX,dword ptr [EAX]
006BDCE4  89 0D 54 4F 85 00         MOV dword ptr [0x00854f54],ECX
006BDCEA  85 C9                     TEST ECX,ECX
006BDCEC  0F 84 0F 01 00 00         JZ 0x006bde01
006BDCF2  33 C0                     XOR EAX,EAX
006BDCF4  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BDCF9  85 C9                     TEST ECX,ECX
006BDCFB  0F 8E 00 01 00 00         JLE 0x006bde01
LAB_006bdd01:
006BDD01  C1 E0 04                  SHL EAX,0x4
006BDD04  8B 8E BC 01 00 00         MOV ECX,dword ptr [ESI + 0x1bc]
006BDD0A  8D 44 08 08               LEA EAX,[EAX + ECX*0x1 + 0x8]
006BDD0E  A3 D8 4F 85 00            MOV [0x00854fd8],EAX
006BDD13  8B 96 E4 01 00 00         MOV EDX,dword ptr [ESI + 0x1e4]
006BDD19  C1 E2 04                  SHL EDX,0x4
006BDD1C  8D 4C 32 14               LEA ECX,[EDX + ESI*0x1 + 0x14]
006BDD20  51                        PUSH ECX
006BDD21  50                        PUSH EAX
006BDD22  68 F0 4E 85 00            PUSH 0x854ef0
006BDD27  E8 84 21 01 00            CALL 0x006cfeb0
006BDD2C  83 C4 0C                  ADD ESP,0xc
006BDD2F  85 C0                     TEST EAX,EAX
006BDD31  0F 84 A6 00 00 00         JZ 0x006bdddd
006BDD37  A1 D8 4F 85 00            MOV EAX,[0x00854fd8]
006BDD3C  8B 30                     MOV ESI,dword ptr [EAX]
006BDD3E  39 35 F0 4E 85 00         CMP dword ptr [0x00854ef0],ESI
006BDD44  0F 85 93 00 00 00         JNZ 0x006bdddd
006BDD4A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006BDD4D  39 15 F4 4E 85 00         CMP dword ptr [0x00854ef4],EDX
006BDD53  0F 85 84 00 00 00         JNZ 0x006bdddd
006BDD59  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006BDD5C  39 0D F8 4E 85 00         CMP dword ptr [0x00854ef8],ECX
006BDD62  75 79                     JNZ 0x006bdddd
006BDD64  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
006BDD67  39 05 FC 4E 85 00         CMP dword ptr [0x00854efc],EAX
006BDD6D  75 6E                     JNZ 0x006bdddd
006BDD6F  50                        PUSH EAX
006BDD70  51                        PUSH ECX
006BDD71  52                        PUSH EDX
006BDD72  56                        PUSH ESI
006BDD73  6A 01                     PUSH 0x1
006BDD75  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BDD7B  52                        PUSH EDX
006BDD7C  E8 BF E6 FF FF            CALL 0x006bc440
006BDD81  85 C0                     TEST EAX,EAX
006BDD83  74 58                     JZ 0x006bdddd
006BDD85  A1 54 4F 85 00            MOV EAX,[0x00854f54]
006BDD8A  8D 50 FF                  LEA EDX,[EAX + -0x1]
006BDD8D  8B 0D 28 4F 85 00         MOV ECX,dword ptr [0x00854f28]
006BDD93  3B CA                     CMP ECX,EDX
006BDD95  7D 1D                     JGE 0x006bddb4
006BDD97  2B C1                     SUB EAX,ECX
006BDD99  48                        DEC EAX
006BDD9A  C1 E0 04                  SHL EAX,0x4
006BDD9D  8B 3D D8 4F 85 00         MOV EDI,dword ptr [0x00854fd8]
006BDDA3  8D 77 10                  LEA ESI,[EDI + 0x10]
006BDDA6  8B C8                     MOV ECX,EAX
006BDDA8  C1 E9 02                  SHR ECX,0x2
006BDDAB  F3 A5                     MOVSD.REP ES:EDI,ESI
006BDDAD  8B C8                     MOV ECX,EAX
006BDDAF  83 E1 03                  AND ECX,0x3
006BDDB2  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006bddb4:
006BDDB4  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BDDBA  8B 81 BC 01 00 00         MOV EAX,dword ptr [ECX + 0x1bc]
006BDDC0  FF 08                     DEC dword ptr [EAX]
006BDDC2  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDDC8  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
006BDDCE  8B 02                     MOV EAX,dword ptr [EDX]
006BDDD0  A3 54 4F 85 00            MOV [0x00854f54],EAX
006BDDD5  A1 28 4F 85 00            MOV EAX,[0x00854f28]
006BDDDA  48                        DEC EAX
006BDDDB  EB 0B                     JMP 0x006bdde8
LAB_006bdddd:
006BDDDD  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDDE3  A1 28 4F 85 00            MOV EAX,[0x00854f28]
LAB_006bdde8:
006BDDE8  83 05 D8 4F 85 00 10      ADD dword ptr [0x00854fd8],0x10
006BDDEF  40                        INC EAX
006BDDF0  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BDDF5  3B 05 54 4F 85 00         CMP EAX,dword ptr [0x00854f54]
006BDDFB  0F 8C 00 FF FF FF         JL 0x006bdd01
LAB_006bde01:
006BDE01  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BDE06  85 C0                     TEST EAX,EAX
006BDE08  0F 85 4A 01 00 00         JNZ 0x006bdf58
006BDE0E  8B 8E BC 01 00 00         MOV ECX,dword ptr [ESI + 0x1bc]
006BDE14  8B 09                     MOV ECX,dword ptr [ECX]
006BDE16  89 0D 54 4F 85 00         MOV dword ptr [0x00854f54],ECX
006BDE1C  85 C9                     TEST ECX,ECX
006BDE1E  0F 84 AE 00 00 00         JZ 0x006bded2
006BDE24  33 C0                     XOR EAX,EAX
006BDE26  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BDE2B  85 C9                     TEST ECX,ECX
006BDE2D  0F 8E 9F 00 00 00         JLE 0x006bded2
LAB_006bde33:
006BDE33  C1 E0 04                  SHL EAX,0x4
006BDE36  8B 96 BC 01 00 00         MOV EDX,dword ptr [ESI + 0x1bc]
006BDE3C  8D 44 10 08               LEA EAX,[EAX + EDX*0x1 + 0x8]
006BDE40  A3 D8 4F 85 00            MOV [0x00854fd8],EAX
006BDE45  81 C6 B4 00 00 00         ADD ESI,0xb4
006BDE4B  56                        PUSH ESI
006BDE4C  50                        PUSH EAX
006BDE4D  68 F0 4E 85 00            PUSH 0x854ef0
006BDE52  E8 59 20 01 00            CALL 0x006cfeb0
006BDE57  83 C4 0C                  ADD ESP,0xc
006BDE5A  85 C0                     TEST EAX,EAX
006BDE5C  74 3E                     JZ 0x006bde9c
006BDE5E  6A 01                     PUSH 0x1
006BDE60  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BDE65  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BDE68  51                        PUSH ECX
006BDE69  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BDE6C  52                        PUSH EDX
006BDE6D  8B 0D FC 4E 85 00         MOV ECX,dword ptr [0x00854efc]
006BDE73  51                        PUSH ECX
006BDE74  8B 15 F8 4E 85 00         MOV EDX,dword ptr [0x00854ef8]
006BDE7A  52                        PUSH EDX
006BDE7B  8B 0D F4 4E 85 00         MOV ECX,dword ptr [0x00854ef4]
006BDE81  51                        PUSH ECX
006BDE82  8B 15 F0 4E 85 00         MOV EDX,dword ptr [0x00854ef0]
006BDE88  52                        PUSH EDX
006BDE89  6A 64                     PUSH 0x64
006BDE8B  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BDE91  50                        PUSH EAX
006BDE92  E8 39 3C 01 00            CALL 0x006d1ad0
006BDE97  83 F8 FF                  CMP EAX,-0x1
006BDE9A  74 26                     JZ 0x006bdec2
LAB_006bde9c:
006BDE9C  83 05 D8 4F 85 00 10      ADD dword ptr [0x00854fd8],0x10
006BDEA3  A1 28 4F 85 00            MOV EAX,[0x00854f28]
006BDEA8  40                        INC EAX
006BDEA9  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BDEAE  3B 05 54 4F 85 00         CMP EAX,dword ptr [0x00854f54]
006BDEB4  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDEBA  0F 8C 73 FF FF FF         JL 0x006bde33
006BDEC0  EB 10                     JMP 0x006bded2
LAB_006bdec2:
006BDEC2  C7 05 98 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f98],0x1
006BDECC  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006bded2:
006BDED2  A1 98 4F 85 00            MOV EAX,[0x00854f98]
006BDED7  85 C0                     TEST EAX,EAX
006BDED9  75 7D                     JNZ 0x006bdf58
006BDEDB  33 C9                     XOR ECX,ECX
006BDEDD  89 0D 60 4F 85 00         MOV dword ptr [0x00854f60],ECX
006BDEE3  A1 A0 4F 85 00            MOV EAX,[0x00854fa0]
006BDEE8  85 C0                     TEST EAX,EAX
006BDEEA  7E 6C                     JLE 0x006bdf58
LAB_006bdeec:
006BDEEC  8B 15 C0 4F 85 00         MOV EDX,dword ptr [0x00854fc0]
006BDEF2  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
006BDEF5  A3 44 4F 85 00            MOV [0x00854f44],EAX
006BDEFA  8B 10                     MOV EDX,dword ptr [EAX]
006BDEFC  83 E2 0D                  AND EDX,0xd
006BDEFF  80 FA 05                  CMP DL,0x5
006BDF02  75 39                     JNZ 0x006bdf3d
006BDF04  6A 01                     PUSH 0x1
006BDF06  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006BDF09  51                        PUSH ECX
006BDF0A  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006BDF0D  52                        PUSH EDX
006BDF0E  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BDF11  51                        PUSH ECX
006BDF12  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BDF15  52                        PUSH EDX
006BDF16  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006BDF19  51                        PUSH ECX
006BDF1A  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006BDF1D  52                        PUSH EDX
006BDF1E  6A 64                     PUSH 0x64
006BDF20  8B 86 C0 01 00 00         MOV EAX,dword ptr [ESI + 0x1c0]
006BDF26  50                        PUSH EAX
006BDF27  E8 A4 3B 01 00            CALL 0x006d1ad0
006BDF2C  83 F8 FF                  CMP EAX,-0x1
006BDF2F  74 1D                     JZ 0x006bdf4e
006BDF31  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BDF37  8B 0D 60 4F 85 00         MOV ECX,dword ptr [0x00854f60]
LAB_006bdf3d:
006BDF3D  41                        INC ECX
006BDF3E  89 0D 60 4F 85 00         MOV dword ptr [0x00854f60],ECX
006BDF44  3B 0D A0 4F 85 00         CMP ECX,dword ptr [0x00854fa0]
006BDF4A  7C A0                     JL 0x006bdeec
006BDF4C  EB 0A                     JMP 0x006bdf58
LAB_006bdf4e:
006BDF4E  C7 05 98 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f98],0x1
LAB_006bdf58:
006BDF58  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006BDF5F  8B 3D C8 4F 85 00         MOV EDI,dword ptr [0x00854fc8]
006BDF65  8D 04 BD 04 00 00 00      LEA EAX,[EDI*0x4 + 0x4]
006BDF6C  83 C0 03                  ADD EAX,0x3
006BDF6F  24 FC                     AND AL,0xfc
006BDF71  E8 CA FA 06 00            CALL 0x0072da40
006BDF76  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BDF79  8B C4                     MOV EAX,ESP
006BDF7B  8B D8                     MOV EBX,EAX
006BDF7D  89 1D DC 4F 85 00         MOV dword ptr [0x00854fdc],EBX
006BDF83  83 CE FF                  OR ESI,0xffffffff
006BDF86  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006BDF89  33 D2                     XOR EDX,EDX
006BDF8B  89 15 DC 4E 85 00         MOV dword ptr [0x00854edc],EDX
006BDF91  33 C0                     XOR EAX,EAX
006BDF93  A3 60 4F 85 00            MOV [0x00854f60],EAX
006BDF98  8B 0D A0 4F 85 00         MOV ECX,dword ptr [0x00854fa0]
006BDF9E  85 C9                     TEST ECX,ECX
006BDFA0  7E 7A                     JLE 0x006be01c
006BDFA2  EB 0C                     JMP 0x006bdfb0
LAB_006bdfa4:
006BDFA4  8B 1D DC 4F 85 00         MOV EBX,dword ptr [0x00854fdc]
006BDFAA  8B 3D C8 4F 85 00         MOV EDI,dword ptr [0x00854fc8]
LAB_006bdfb0:
006BDFB0  C7 05 64 4F 85 00 00 00 00 00  MOV dword ptr [0x00854f64],0x0
006BDFBA  8B 0D C0 4F 85 00         MOV ECX,dword ptr [0x00854fc0]
006BDFC0  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
006BDFC3  89 0D 44 4F 85 00         MOV dword ptr [0x00854f44],ECX
006BDFC9  8B 01                     MOV EAX,dword ptr [ECX]
006BDFCB  A8 08                     TEST AL,0x8
006BDFCD  74 20                     JZ 0x006bdfef
006BDFCF  A1 94 4F 85 00            MOV EAX,[0x00854f94]
006BDFD4  85 C0                     TEST EAX,EAX
006BDFD6  74 31                     JZ 0x006be009
LAB_006bdfd8:
006BDFD8  47                        INC EDI
006BDFD9  3B D7                     CMP EDX,EDI
006BDFDB  7D 2C                     JGE 0x006be009
006BDFDD  89 0C 93                  MOV dword ptr [EBX + EDX*0x4],ECX
006BDFE0  8B 15 DC 4E 85 00         MOV EDX,dword ptr [0x00854edc]
006BDFE6  42                        INC EDX
006BDFE7  89 15 DC 4E 85 00         MOV dword ptr [0x00854edc],EDX
006BDFED  EB 1A                     JMP 0x006be009
LAB_006bdfef:
006BDFEF  A8 40                     TEST AL,0x40
006BDFF1  74 0C                     JZ 0x006bdfff
006BDFF3  C7 05 64 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f64],0x1
006BDFFD  EB D9                     JMP 0x006bdfd8
LAB_006bdfff:
006BDFFF  24 F8                     AND AL,0xf8
006BE001  89 01                     MOV dword ptr [ECX],EAX
006BE003  8B 15 DC 4E 85 00         MOV EDX,dword ptr [0x00854edc]
LAB_006be009:
006BE009  A1 60 4F 85 00            MOV EAX,[0x00854f60]
006BE00E  40                        INC EAX
006BE00F  A3 60 4F 85 00            MOV [0x00854f60],EAX
006BE014  3B 05 A0 4F 85 00         CMP EAX,dword ptr [0x00854fa0]
006BE01A  7C 88                     JL 0x006bdfa4
LAB_006be01c:
006BE01C  89 15 C8 4F 85 00         MOV dword ptr [0x00854fc8],EDX
006BE022  E8 09 F2 FF FF            CALL 0x006bd230
006BE027  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE02C  33 FF                     XOR EDI,EDI
006BE02E  39 B8 2C 02 00 00         CMP dword ptr [EAX + 0x22c],EDI
006BE034  0F 84 B0 00 00 00         JZ 0x006be0ea
006BE03A  39 3D 98 4F 85 00         CMP dword ptr [0x00854f98],EDI
006BE040  0F 85 A4 00 00 00         JNZ 0x006be0ea
006BE046  8B 90 BC 01 00 00         MOV EDX,dword ptr [EAX + 0x1bc]
006BE04C  89 3A                     MOV dword ptr [EDX],EDI
006BE04E  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE053  8B 88 BC 01 00 00         MOV ECX,dword ptr [EAX + 0x1bc]
006BE059  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
006BE05C  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE061  8B 90 C0 01 00 00         MOV EDX,dword ptr [EAX + 0x1c0]
006BE067  8B 12                     MOV EDX,dword ptr [EDX]
006BE069  89 15 54 4F 85 00         MOV dword ptr [0x00854f54],EDX
006BE06F  8B 88 C0 01 00 00         MOV ECX,dword ptr [EAX + 0x1c0]
006BE075  83 C1 08                  ADD ECX,0x8
006BE078  89 0D D8 4F 85 00         MOV dword ptr [0x00854fd8],ECX
006BE07E  89 3D 28 4F 85 00         MOV dword ptr [0x00854f28],EDI
006BE084  3B D7                     CMP EDX,EDI
006BE086  7E 62                     JLE 0x006be0ea
LAB_006be088:
006BE088  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006BE08B  52                        PUSH EDX
006BE08C  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BE08F  52                        PUSH EDX
006BE090  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006BE093  52                        PUSH EDX
006BE094  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006BE097  52                        PUSH EDX
006BE098  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006BE09B  52                        PUSH EDX
006BE09C  8B 09                     MOV ECX,dword ptr [ECX]
006BE09E  51                        PUSH ECX
006BE09F  6A 64                     PUSH 0x64
006BE0A1  8B 90 BC 01 00 00         MOV EDX,dword ptr [EAX + 0x1bc]
006BE0A7  52                        PUSH EDX
006BE0A8  E8 13 3E 01 00            CALL 0x006d1ec0
006BE0AD  83 F8 FF                  CMP EAX,-0x1
006BE0B0  74 29                     JZ 0x006be0db
006BE0B2  8B 0D D8 4F 85 00         MOV ECX,dword ptr [0x00854fd8]
006BE0B8  83 C1 10                  ADD ECX,0x10
006BE0BB  89 0D D8 4F 85 00         MOV dword ptr [0x00854fd8],ECX
006BE0C1  A1 28 4F 85 00            MOV EAX,[0x00854f28]
006BE0C6  40                        INC EAX
006BE0C7  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BE0CC  3B 05 54 4F 85 00         CMP EAX,dword ptr [0x00854f54]
006BE0D2  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE0D7  7C AF                     JL 0x006be088
006BE0D9  EB 0F                     JMP 0x006be0ea
LAB_006be0db:
006BE0DB  C7 05 98 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f98],0x1
006BE0E5  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
LAB_006be0ea:
006BE0EA  33 FF                     XOR EDI,EDI
006BE0EC  39 3D 98 4F 85 00         CMP dword ptr [0x00854f98],EDI
006BE0F2  74 0A                     JZ 0x006be0fe
006BE0F4  E8 67 F1 FF FF            CALL 0x006bd260
006BE0F9  E9 6E 01 00 00            JMP 0x006be26c
LAB_006be0fe:
006BE0FE  39 B8 D8 01 00 00         CMP dword ptr [EAX + 0x1d8],EDI
006BE104  0F 85 62 01 00 00         JNZ 0x006be26c
006BE10A  8B 88 C0 01 00 00         MOV ECX,dword ptr [EAX + 0x1c0]
006BE110  8B 11                     MOV EDX,dword ptr [ECX]
006BE112  89 15 54 4F 85 00         MOV dword ptr [0x00854f54],EDX
006BE118  8B 88 C0 01 00 00         MOV ECX,dword ptr [EAX + 0x1c0]
006BE11E  83 C1 08                  ADD ECX,0x8
006BE121  89 0D D8 4F 85 00         MOV dword ptr [0x00854fd8],ECX
006BE127  39 B8 2C 02 00 00         CMP dword ptr [EAX + 0x22c],EDI
006BE12D  0F 84 EE 00 00 00         JZ 0x006be221
006BE133  8B 90 34 02 00 00         MOV EDX,dword ptr [EAX + 0x234]
006BE139  52                        PUSH EDX
006BE13A  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BE140  51                        PUSH ECX
006BE141  FF 90 28 02 00 00         CALL dword ptr [EAX + 0x228]
006BE147  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE14C  3B C7                     CMP EAX,EDI
006BE14E  0F 85 C6 00 00 00         JNZ 0x006be21a
006BE154  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BE15A  8B 91 BC 01 00 00         MOV EDX,dword ptr [ECX + 0x1bc]
006BE160  8B 02                     MOV EAX,dword ptr [EDX]
006BE162  A3 54 4F 85 00            MOV [0x00854f54],EAX
006BE167  8B 81 BC 01 00 00         MOV EAX,dword ptr [ECX + 0x1bc]
006BE16D  83 C0 08                  ADD EAX,0x8
006BE170  A3 D8 4F 85 00            MOV [0x00854fd8],EAX
006BE175  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006BE17C  89 3D 28 4F 85 00         MOV dword ptr [0x00854f28],EDI
LAB_006be182:
006BE182  8B 15 54 4F 85 00         MOV EDX,dword ptr [0x00854f54]
006BE188  39 15 28 4F 85 00         CMP dword ptr [0x00854f28],EDX
006BE18E  7D 3B                     JGE 0x006be1cb
006BE190  8B 91 34 02 00 00         MOV EDX,dword ptr [ECX + 0x234]
006BE196  52                        PUSH EDX
006BE197  50                        PUSH EAX
006BE198  FF 91 2C 02 00 00         CALL dword ptr [ECX + 0x22c]
006BE19E  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE1A3  39 3D E4 4F 85 00         CMP dword ptr [0x00854fe4],EDI
006BE1A9  75 05                     JNZ 0x006be1b0
006BE1AB  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006be1b0:
006BE1B0  A1 D8 4F 85 00            MOV EAX,[0x00854fd8]
006BE1B5  83 C0 10                  ADD EAX,0x10
006BE1B8  A3 D8 4F 85 00            MOV [0x00854fd8],EAX
006BE1BD  FF 05 28 4F 85 00         INC dword ptr [0x00854f28]
006BE1C3  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BE1C9  EB B7                     JMP 0x006be182
LAB_006be1cb:
006BE1CB  83 CE FF                  OR ESI,0xffffffff
006BE1CE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006BE1D1  8B 81 34 02 00 00         MOV EAX,dword ptr [ECX + 0x234]
006BE1D7  50                        PUSH EAX
006BE1D8  FF 91 30 02 00 00         CALL dword ptr [ECX + 0x230]
006BE1DE  E9 89 00 00 00            JMP 0x006be26c
LAB_006be21a:
006BE21A  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
006BE21F  EB 4B                     JMP 0x006be26c
LAB_006be221:
006BE221  89 3D 28 4F 85 00         MOV dword ptr [0x00854f28],EDI
006BE227  3B D7                     CMP EDX,EDI
006BE229  7E 41                     JLE 0x006be26c
LAB_006be22b:
006BE22B  51                        PUSH ECX
006BE22C  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BE232  51                        PUSH ECX
006BE233  E8 48 E3 FF FF            CALL 0x006bc580
006BE238  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE23D  39 3D E4 4F 85 00         CMP dword ptr [0x00854fe4],EDI
006BE243  75 05                     JNZ 0x006be24a
006BE245  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006be24a:
006BE24A  8B 0D D8 4F 85 00         MOV ECX,dword ptr [0x00854fd8]
006BE250  83 C1 10                  ADD ECX,0x10
006BE253  89 0D D8 4F 85 00         MOV dword ptr [0x00854fd8],ECX
006BE259  A1 28 4F 85 00            MOV EAX,[0x00854f28]
006BE25E  40                        INC EAX
006BE25F  A3 28 4F 85 00            MOV [0x00854f28],EAX
006BE264  3B 05 54 4F 85 00         CMP EAX,dword ptr [0x00854f54]
006BE26A  7C BF                     JL 0x006be22b
LAB_006be26c:
006BE26C  8B 15 E8 4E 85 00         MOV EDX,dword ptr [0x00854ee8]
006BE272  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
006BE275  25 00 00 00 02            AND EAX,0x2000000
006BE27A  0B 05 98 4F 85 00         OR EAX,dword ptr [0x00854f98]
006BE280  A3 D4 4E 85 00            MOV [0x00854ed4],EAX
006BE285  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006BE28B  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006BE28E  8D 55 A4                  LEA EDX,[EBP + -0x5c]
006BE291  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006BE297  8D 45 A8                  LEA EAX,[EBP + -0x58]
006BE29A  56                        PUSH ESI
006BE29B  68 21 DA 72 00            PUSH 0x72da21
006BE2A0  6A 02                     PUSH 0x2
006BE2A2  50                        PUSH EAX
006BE2A3  E8 48 F5 06 00            CALL 0x0072d7f0
006BE2A8  83 C4 10                  ADD ESP,0x10
006BE2AB  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BE2AE  85 C0                     TEST EAX,EAX
006BE2B0  0F 85 C0 04 00 00         JNZ 0x006be776
006BE2B6  33 C9                     XOR ECX,ECX
006BE2B8  89 0D 00 4F 85 00         MOV dword ptr [0x00854f00],ECX
006BE2BE  8B 15 C8 4F 85 00         MOV EDX,dword ptr [0x00854fc8]
006BE2C4  8D 42 FF                  LEA EAX,[EDX + -0x1]
006BE2C7  A3 60 4F 85 00            MOV [0x00854f60],EAX
006BE2CC  85 C0                     TEST EAX,EAX
006BE2CE  0F 8C 7A 04 00 00         JL 0x006be74e
006BE2D4  EB 06                     JMP 0x006be2dc
LAB_006be2d6:
006BE2D6  8B 0D 00 4F 85 00         MOV ECX,dword ptr [0x00854f00]
LAB_006be2dc:
006BE2DC  8B 15 DC 4F 85 00         MOV EDX,dword ptr [0x00854fdc]
006BE2E2  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006BE2E5  A3 44 4F 85 00            MOV [0x00854f44],EAX
006BE2EA  F7 00 00 50 00 A0         TEST dword ptr [EAX],0xa0005000
006BE2F0  74 29                     JZ 0x006be31b
006BE2F2  85 C9                     TEST ECX,ECX
006BE2F4  0F 84 A1 00 00 00         JZ 0x006be39b
006BE2FA  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE2FF  8B 08                     MOV ECX,dword ptr [EAX]
006BE301  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006BE304  8B 10                     MOV EDX,dword ptr [EAX]
006BE306  6A 00                     PUSH 0x0
006BE308  50                        PUSH EAX
006BE309  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
006BE30F  C7 05 00 4F 85 00 00 00 00 00  MOV dword ptr [0x00854f00],0x0
006BE319  EB 7B                     JMP 0x006be396
LAB_006be31b:
006BE31B  85 C9                     TEST ECX,ECX
006BE31D  75 7C                     JNZ 0x006be39b
006BE31F  89 0D D8 4E 85 00         MOV dword ptr [0x00854ed8],ECX
LAB_006be325:
006BE325  6A 00                     PUSH 0x0
006BE327  68 E0 4F 85 00            PUSH 0x854fe0
006BE32C  68 00 4F 85 00            PUSH 0x854f00
006BE331  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE336  8B 08                     MOV ECX,dword ptr [EAX]
006BE338  8B 51 44                  MOV EDX,dword ptr [ECX + 0x44]
006BE33B  52                        PUSH EDX
006BE33C  E8 FF DA FF FF            CALL 0x006bbe40
006BE341  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE346  85 C0                     TEST EAX,EAX
006BE348  74 35                     JZ 0x006be37f
006BE34A  3D C2 01 76 88            CMP EAX,0x887601c2
006BE34F  75 2E                     JNZ 0x006be37f
006BE351  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE356  8B 08                     MOV ECX,dword ptr [EAX]
006BE358  51                        PUSH ECX
006BE359  E8 E2 08 01 00            CALL 0x006cec40
006BE35E  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BE364  52                        PUSH EDX
006BE365  E8 F6 0A 01 00            CALL 0x006cee60
006BE36A  A1 D8 4E 85 00            MOV EAX,[0x00854ed8]
006BE36F  40                        INC EAX
006BE370  A3 D8 4E 85 00            MOV [0x00854ed8],EAX
006BE375  83 F8 02                  CMP EAX,0x2
006BE378  7C AB                     JL 0x006be325
006BE37A  A1 EC 4F 85 00            MOV EAX,[0x00854fec]
LAB_006be37f:
006BE37F  8B 0D E4 4F 85 00         MOV ECX,dword ptr [0x00854fe4]
006BE385  85 C9                     TEST ECX,ECX
006BE387  75 05                     JNZ 0x006be38e
006BE389  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006be38e:
006BE38E  85 C0                     TEST EAX,EAX
006BE390  0F 85 B8 03 00 00         JNZ 0x006be74e
LAB_006be396:
006BE396  A1 44 4F 85 00            MOV EAX,[0x00854f44]
LAB_006be39b:
006BE39B  8B 08                     MOV ECX,dword ptr [EAX]
006BE39D  F6 C1 08                  TEST CL,0x8
006BE3A0  74 55                     JZ 0x006be3f7
006BE3A2  68 D4 4E 85 00            PUSH 0x854ed4
006BE3A7  A1 A4 4F 85 00            MOV EAX,[0x00854fa4]
006BE3AC  50                        PUSH EAX
006BE3AD  8B 0D A8 4F 85 00         MOV ECX,dword ptr [0x00854fa8]
006BE3B3  51                        PUSH ECX
006BE3B4  8B 15 48 4F 85 00         MOV EDX,dword ptr [0x00854f48]
006BE3BA  52                        PUSH EDX
006BE3BB  A1 4C 4F 85 00            MOV EAX,[0x00854f4c]
006BE3C0  50                        PUSH EAX
006BE3C1  8B 0D E0 4F 85 00         MOV ECX,dword ptr [0x00854fe0]
006BE3C7  51                        PUSH ECX
006BE3C8  8B 15 00 4F 85 00         MOV EDX,dword ptr [0x00854f00]
006BE3CE  52                        PUSH EDX
006BE3CF  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE3D4  50                        PUSH EAX
006BE3D5  E8 36 13 00 00            CALL 0x006bf710
006BE3DA  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE3DF  8B 0D E4 4F 85 00         MOV ECX,dword ptr [0x00854fe4]
006BE3E5  85 C9                     TEST ECX,ECX
006BE3E7  0F 85 50 03 00 00         JNZ 0x006be73d
006BE3ED  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
006BE3F2  E9 46 03 00 00            JMP 0x006be73d
LAB_006be3f7:
006BE3F7  F6 C1 02                  TEST CL,0x2
006BE3FA  0F 84 3D 03 00 00         JZ 0x006be73d
006BE400  8B 50 50                  MOV EDX,dword ptr [EAX + 0x50]
006BE403  89 15 9C 4F 85 00         MOV dword ptr [0x00854f9c],EDX
006BE409  8B CA                     MOV ECX,EDX
006BE40B  C1 E1 04                  SHL ECX,0x4
006BE40E  8B 1D D4 4F 85 00         MOV EBX,dword ptr [0x00854fd4]
006BE414  8D 7C 19 14               LEA EDI,[ECX + EBX*0x1 + 0x14]
006BE418  89 3D 90 4F 85 00         MOV dword ptr [0x00854f90],EDI
006BE41E  8D 48 28                  LEA ECX,[EAX + 0x28]
006BE421  8B 31                     MOV ESI,dword ptr [ECX]
006BE423  89 35 E0 4E 85 00         MOV dword ptr [0x00854ee0],ESI
006BE429  89 35 B0 4F 85 00         MOV dword ptr [0x00854fb0],ESI
006BE42F  8B 70 2C                  MOV ESI,dword ptr [EAX + 0x2c]
006BE432  89 35 E4 4E 85 00         MOV dword ptr [0x00854ee4],ESI
006BE438  89 35 B4 4F 85 00         MOV dword ptr [0x00854fb4],ESI
006BE43E  8B 70 30                  MOV ESI,dword ptr [EAX + 0x30]
006BE441  89 35 B8 4F 85 00         MOV dword ptr [0x00854fb8],ESI
006BE447  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
006BE44A  89 35 BC 4F 85 00         MOV dword ptr [0x00854fbc],ESI
006BE450  83 78 68 04               CMP dword ptr [EAX + 0x68],0x4
006BE454  7E 59                     JLE 0x006be4af
006BE456  57                        PUSH EDI
006BE457  51                        PUSH ECX
006BE458  68 F0 4E 85 00            PUSH 0x854ef0
006BE45D  E8 4E 1A 01 00            CALL 0x006cfeb0
006BE462  83 C4 0C                  ADD ESP,0xc
006BE465  8B 15 44 4F 85 00         MOV EDX,dword ptr [0x00854f44]
006BE46B  A1 F0 4E 85 00            MOV EAX,[0x00854ef0]
006BE470  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
006BE473  8B 0D 44 4F 85 00         MOV ECX,dword ptr [0x00854f44]
006BE479  8B 15 F4 4E 85 00         MOV EDX,dword ptr [0x00854ef4]
006BE47F  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006BE482  A1 44 4F 85 00            MOV EAX,[0x00854f44]
006BE487  8B 0D F8 4E 85 00         MOV ECX,dword ptr [0x00854ef8]
006BE48D  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006BE490  8B 15 FC 4E 85 00         MOV EDX,dword ptr [0x00854efc]
006BE496  A1 44 4F 85 00            MOV EAX,[0x00854f44]
006BE49B  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
006BE49E  8B 1D D4 4F 85 00         MOV EBX,dword ptr [0x00854fd4]
006BE4A4  A1 44 4F 85 00            MOV EAX,[0x00854f44]
006BE4A9  8B 15 9C 4F 85 00         MOV EDX,dword ptr [0x00854f9c]
LAB_006be4af:
006BE4AF  8B 08                     MOV ECX,dword ptr [EAX]
006BE4B1  F6 C5 40                  TEST CH,0x40
006BE4B4  8B 8C 93 F0 00 00 00      MOV ECX,dword ptr [EBX + EDX*0x4 + 0xf0]
006BE4BB  0F 84 64 01 00 00         JZ 0x006be625
006BE4C1  85 C9                     TEST ECX,ECX
006BE4C3  0F 84 71 02 00 00         JZ 0x006be73a
006BE4C9  A1 E8 4E 85 00            MOV EAX,[0x00854ee8]
006BE4CE  8B 70 40                  MOV ESI,dword ptr [EAX + 0x40]
006BE4D1  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
006BE4D4  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
006BE4D7  8B 15 E8 4E 85 00         MOV EDX,dword ptr [0x00854ee8]
006BE4DD  89 72 44                  MOV dword ptr [EDX + 0x44],ESI
006BE4E0  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE4E5  8B 0D 9C 4F 85 00         MOV ECX,dword ptr [0x00854f9c]
006BE4EB  8B BC C8 1C 01 00 00      MOV EDI,dword ptr [EAX + ECX*0x8 + 0x11c]
006BE4F2  8B 9C C8 20 01 00 00      MOV EBX,dword ptr [EAX + ECX*0x8 + 0x120]
006BE4F9  8D 85 7C FF FF FF         LEA EAX,[EBP + 0xffffff7c]
006BE4FF  50                        PUSH EAX
006BE500  8B 0D FC 4E 85 00         MOV ECX,dword ptr [0x00854efc]
006BE506  51                        PUSH ECX
006BE507  8B 15 F8 4E 85 00         MOV EDX,dword ptr [0x00854ef8]
006BE50D  52                        PUSH EDX
006BE50E  A1 F4 4E 85 00            MOV EAX,[0x00854ef4]
006BE513  50                        PUSH EAX
006BE514  8B 0D F0 4E 85 00         MOV ECX,dword ptr [0x00854ef0]
006BE51A  51                        PUSH ECX
006BE51B  8B 15 E8 4E 85 00         MOV EDX,dword ptr [0x00854ee8]
006BE521  52                        PUSH EDX
006BE522  E8 09 57 01 00            CALL 0x006d3c30
006BE527  8D 45 94                  LEA EAX,[EBP + -0x6c]
006BE52A  50                        PUSH EAX
006BE52B  53                        PUSH EBX
006BE52C  57                        PUSH EDI
006BE52D  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BE533  51                        PUSH ECX
006BE534  E8 77 C2 FF FF            CALL 0x006ba7b0
006BE539  A1 44 4F 85 00            MOV EAX,[0x00854f44]
006BE53E  8B 90 C0 00 00 00         MOV EDX,dword ptr [EAX + 0xc0]
006BE544  52                        PUSH EDX
006BE545  8B 0D BC 4F 85 00         MOV ECX,dword ptr [0x00854fbc]
006BE54B  51                        PUSH ECX
006BE54C  8B 15 B8 4F 85 00         MOV EDX,dword ptr [0x00854fb8]
006BE552  52                        PUSH EDX
006BE553  8B 0D E4 4E 85 00         MOV ECX,dword ptr [0x00854ee4]
006BE559  2B CB                     SUB ECX,EBX
006BE55B  51                        PUSH ECX
006BE55C  8B 15 E0 4E 85 00         MOV EDX,dword ptr [0x00854ee0]
006BE562  2B D7                     SUB EDX,EDI
006BE564  52                        PUSH EDX
006BE565  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
006BE56B  51                        PUSH ECX
006BE56C  8B 50 40                  MOV EDX,dword ptr [EAX + 0x40]
006BE56F  52                        PUSH EDX
006BE570  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BE576  51                        PUSH ECX
006BE577  FF 90 CC 00 00 00         CALL dword ptr [EAX + 0xcc]
006BE57D  6A 00                     PUSH 0x0
006BE57F  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
006BE582  52                        PUSH EDX
006BE583  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006BE586  50                        PUSH EAX
006BE587  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BE58D  51                        PUSH ECX
006BE58E  E8 1D C2 FF FF            CALL 0x006ba7b0
006BE593  6A 00                     PUSH 0x0
006BE595  8B 55 88                  MOV EDX,dword ptr [EBP + -0x78]
006BE598  52                        PUSH EDX
006BE599  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006BE59C  50                        PUSH EAX
006BE59D  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
006BE5A0  51                        PUSH ECX
006BE5A1  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
006BE5A7  52                        PUSH EDX
006BE5A8  A1 E8 4E 85 00            MOV EAX,[0x00854ee8]
006BE5AD  50                        PUSH EAX
006BE5AE  E8 7D 56 01 00            CALL 0x006d3c30
006BE5B3  A1 E8 4E 85 00            MOV EAX,[0x00854ee8]
006BE5B8  8B 48 40                  MOV ECX,dword ptr [EAX + 0x40]
006BE5BB  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
006BE5BE  8B 15 E8 4E 85 00         MOV EDX,dword ptr [0x00854ee8]
006BE5C4  89 72 40                  MOV dword ptr [EDX + 0x40],ESI
006BE5C7  A1 D4 4E 85 00            MOV EAX,[0x00854ed4]
006BE5CC  85 C0                     TEST EAX,EAX
006BE5CE  0F 85 61 01 00 00         JNZ 0x006be735
006BE5D4  6A 01                     PUSH 0x1
006BE5D6  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE5DB  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
006BE5DE  51                        PUSH ECX
006BE5DF  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
006BE5E2  52                        PUSH EDX
006BE5E3  8B 0D FC 4E 85 00         MOV ECX,dword ptr [0x00854efc]
006BE5E9  51                        PUSH ECX
006BE5EA  8B 15 F8 4E 85 00         MOV EDX,dword ptr [0x00854ef8]
006BE5F0  52                        PUSH EDX
006BE5F1  8B 0D F4 4E 85 00         MOV ECX,dword ptr [0x00854ef4]
006BE5F7  51                        PUSH ECX
006BE5F8  8B 15 F0 4E 85 00         MOV EDX,dword ptr [0x00854ef0]
006BE5FE  52                        PUSH EDX
006BE5FF  6A 64                     PUSH 0x64
006BE601  8B 80 C0 01 00 00         MOV EAX,dword ptr [EAX + 0x1c0]
006BE607  50                        PUSH EAX
006BE608  E8 C3 34 01 00            CALL 0x006d1ad0
006BE60D  83 F8 FF                  CMP EAX,-0x1
006BE610  0F 85 1F 01 00 00         JNZ 0x006be735
006BE616  C7 05 D4 4E 85 00 01 00 00 00  MOV dword ptr [0x00854ed4],0x1
006BE620  E9 10 01 00 00            JMP 0x006be735
LAB_006be625:
006BE625  85 C9                     TEST ECX,ECX
006BE627  0F 84 0D 01 00 00         JZ 0x006be73a
006BE62D  33 D2                     XOR EDX,EDX
006BE62F  89 15 58 4F 85 00         MOV dword ptr [0x00854f58],EDX
006BE635  89 15 1C 4F 85 00         MOV dword ptr [0x00854f1c],EDX
006BE63B  89 15 5C 4F 85 00         MOV dword ptr [0x00854f5c],EDX
006BE641  8B 08                     MOV ECX,dword ptr [EAX]
006BE643  F6 C5 10                  TEST CH,0x10
006BE646  74 0F                     JZ 0x006be657
006BE648  C7 05 1C 4F 85 00 02 00 00 00  MOV dword ptr [0x00854f1c],0x2
006BE652  8B 48 58                  MOV ECX,dword ptr [EAX + 0x58]
006BE655  EB 12                     JMP 0x006be669
LAB_006be657:
006BE657  F6 C5 20                  TEST CH,0x20
006BE65A  74 13                     JZ 0x006be66f
006BE65C  C7 05 1C 4F 85 00 01 00 00 00  MOV dword ptr [0x00854f1c],0x1
006BE666  8B 48 60                  MOV ECX,dword ptr [EAX + 0x60]
LAB_006be669:
006BE669  89 0D 5C 4F 85 00         MOV dword ptr [0x00854f5c],ECX
LAB_006be66f:
006BE66F  89 15 20 4F 85 00         MOV dword ptr [0x00854f20],EDX
006BE675  89 15 24 4F 85 00         MOV dword ptr [0x00854f24],EDX
006BE67B  8B 08                     MOV ECX,dword ptr [EAX]
006BE67D  F7 C1 00 00 00 60         TEST ECX,0x60000000
006BE683  74 22                     JZ 0x006be6a7
006BE685  8B 90 C8 00 00 00         MOV EDX,dword ptr [EAX + 0xc8]
006BE68B  2B 90 C4 00 00 00         SUB EDX,dword ptr [EAX + 0xc4]
006BE691  4A                        DEC EDX
006BE692  0F AF 15 BC 4F 85 00      IMUL EDX,dword ptr [0x00854fbc]
006BE699  89 15 24 4F 85 00         MOV dword ptr [0x00854f24],EDX
006BE69F  8B 88 CC 00 00 00         MOV ECX,dword ptr [EAX + 0xcc]
006BE6A5  EB 75                     JMP 0x006be71c
LAB_006be6a7:
006BE6A7  F7 C1 00 00 00 C0         TEST ECX,0xc0000000
006BE6AD  74 2D                     JZ 0x006be6dc
006BE6AF  8B 90 C4 00 00 00         MOV EDX,dword ptr [EAX + 0xc4]
006BE6B5  8B 88 CC 00 00 00         MOV ECX,dword ptr [EAX + 0xcc]
006BE6BB  8B 14 D1                  MOV EDX,dword ptr [ECX + EDX*0x8]
006BE6BE  89 15 68 4F 85 00         MOV dword ptr [0x00854f68],EDX
006BE6C4  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
006BE6CA  8B 90 CC 00 00 00         MOV EDX,dword ptr [EAX + 0xcc]
006BE6D0  8B 4C CA 04               MOV ECX,dword ptr [EDX + ECX*0x8 + 0x4]
006BE6D4  89 0D 58 4F 85 00         MOV dword ptr [0x00854f58],ECX
006BE6DA  EB 46                     JMP 0x006be722
LAB_006be6dc:
006BE6DC  F7 C1 00 00 00 05         TEST ECX,0x5000000
006BE6E2  74 29                     JZ 0x006be70d
006BE6E4  8B 90 C0 00 00 00         MOV EDX,dword ptr [EAX + 0xc0]
006BE6EA  89 15 20 4F 85 00         MOV dword ptr [0x00854f20],EDX
006BE6F0  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
006BE6F6  0F AF CA                  IMUL ECX,EDX
006BE6F9  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
006BE6FC  8B 88 CC 00 00 00         MOV ECX,dword ptr [EAX + 0xcc]
006BE702  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006BE705  89 15 68 4F 85 00         MOV dword ptr [0x00854f68],EDX
006BE70B  EB 15                     JMP 0x006be722
LAB_006be70d:
006BE70D  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
006BE713  8B 90 CC 00 00 00         MOV EDX,dword ptr [EAX + 0xcc]
006BE719  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
LAB_006be71c:
006BE71C  89 0D 68 4F 85 00         MOV dword ptr [0x00854f68],ECX
LAB_006be722:
006BE722  8B 10                     MOV EDX,dword ptr [EAX]
006BE724  81 E2 00 01 00 FF         AND EDX,0xff000100
006BE72A  09 15 1C 4F 85 00         OR dword ptr [0x00854f1c],EDX
006BE730  E8 7B ED FF FF            CALL 0x006bd4b0
LAB_006be735:
006BE735  A1 44 4F 85 00            MOV EAX,[0x00854f44]
LAB_006be73a:
006BE73A  83 08 01                  OR dword ptr [EAX],0x1
LAB_006be73d:
006BE73D  A1 60 4F 85 00            MOV EAX,[0x00854f60]
006BE742  48                        DEC EAX
006BE743  A3 60 4F 85 00            MOV [0x00854f60],EAX
006BE748  0F 89 88 FB FF FF         JNS 0x006be2d6
LAB_006be74e:
006BE74E  A1 00 4F 85 00            MOV EAX,[0x00854f00]
006BE753  85 C0                     TEST EAX,EAX
006BE755  74 15                     JZ 0x006be76c
006BE757  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE75C  8B 08                     MOV ECX,dword ptr [EAX]
006BE75E  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006BE761  8B 10                     MOV EDX,dword ptr [EAX]
006BE763  6A 00                     PUSH 0x0
006BE765  50                        PUSH EAX
006BE766  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_006be76c:
006BE76C  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006BE76F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006BE774  EB 1D                     JMP 0x006be793
LAB_006be776:
006BE776  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006BE779  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006BE77F  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE784  8B 0D E4 4F 85 00         MOV ECX,dword ptr [0x00854fe4]
006BE78A  85 C9                     TEST ECX,ECX
006BE78C  75 05                     JNZ 0x006be793
006BE78E  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006be793:
006BE793  8B 15 D4 4E 85 00         MOV EDX,dword ptr [0x00854ed4]
006BE799  52                        PUSH EDX
006BE79A  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BE79F  50                        PUSH EAX
006BE7A0  E8 9B 02 00 00            CALL 0x006bea40
006BE7A5  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BE7AA  3D A0 00 76 88            CMP EAX,0x887600a0
006BE7AF  74 07                     JZ 0x006be7b8
006BE7B1  3D AE 01 76 88            CMP EAX,0x887601ae
006BE7B6  75 07                     JNZ 0x006be7bf
LAB_006be7b8:
006BE7B8  33 C0                     XOR EAX,EAX
006BE7BA  A3 EC 4F 85 00            MOV [0x00854fec],EAX
LAB_006be7bf:
006BE7BF  33 DB                     XOR EBX,EBX
006BE7C1  39 1D E4 4F 85 00         CMP dword ptr [0x00854fe4],EBX
006BE7C7  75 05                     JNZ 0x006be7ce
006BE7C9  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006be7ce:
006BE7CE  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BE7D4  89 99 B8 01 00 00         MOV dword ptr [ECX + 0x1b8],EBX
006BE7DA  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BE7E0  8B 82 BC 01 00 00         MOV EAX,dword ptr [EDX + 0x1bc]
006BE7E6  89 18                     MOV dword ptr [EAX],EBX
006BE7E8  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BE7EE  8B 91 BC 01 00 00         MOV EDX,dword ptr [ECX + 0x1bc]
006BE7F4  89 5A 04                  MOV dword ptr [EDX + 0x4],EBX
006BE7F7  33 C0                     XOR EAX,EAX
006BE7F9  A3 EC 4E 85 00            MOV [0x00854eec],EAX
006BE7FE  39 1D A0 4F 85 00         CMP dword ptr [0x00854fa0],EBX
006BE804  0F 8E 02 01 00 00         JLE 0x006be90c
LAB_006be80a:
006BE80A  8B 0D C0 4F 85 00         MOV ECX,dword ptr [0x00854fc0]
006BE810  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006BE813  A3 D0 4F 85 00            MOV [0x00854fd0],EAX
006BE818  F6 00 20                  TEST byte ptr [EAX],0x20
006BE81B  74 6F                     JZ 0x006be88c
006BE81D  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
006BE820  89 0D 9C 4F 85 00         MOV dword ptr [0x00854f9c],ECX
006BE826  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BE82C  8B 8C CA 1C 01 00 00      MOV ECX,dword ptr [EDX + ECX*0x8 + 0x11c]
006BE833  29 48 28                  SUB dword ptr [EAX + 0x28],ECX
006BE836  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE83B  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BE841  8B 0D 9C 4F 85 00         MOV ECX,dword ptr [0x00854f9c]
006BE847  8B 94 CA 20 01 00 00      MOV EDX,dword ptr [EDX + ECX*0x8 + 0x120]
006BE84E  29 50 2C                  SUB dword ptr [EAX + 0x2c],EDX
006BE851  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE856  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BE85C  8B 15 9C 4F 85 00         MOV EDX,dword ptr [0x00854f9c]
006BE862  8B 8C D1 1C 01 00 00      MOV ECX,dword ptr [ECX + EDX*0x8 + 0x11c]
006BE869  29 48 18                  SUB dword ptr [EAX + 0x18],ECX
006BE86C  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE871  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BE877  8B 0D 9C 4F 85 00         MOV ECX,dword ptr [0x00854f9c]
006BE87D  8B 94 CA 20 01 00 00      MOV EDX,dword ptr [EDX + ECX*0x8 + 0x120]
006BE884  29 50 1C                  SUB dword ptr [EAX + 0x1c],EDX
006BE887  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
LAB_006be88c:
006BE88C  8B 08                     MOV ECX,dword ptr [EAX]
006BE88E  F6 C5 04                  TEST CH,0x4
006BE891  74 25                     JZ 0x006be8b8
006BE893  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
006BE896  49                        DEC ECX
006BE897  01 48 28                  ADD dword ptr [EAX + 0x28],ECX
006BE89A  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE89F  8B 50 30                  MOV EDX,dword ptr [EAX + 0x30]
006BE8A2  F7 DA                     NEG EDX
006BE8A4  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
006BE8A7  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE8AC  8B 08                     MOV ECX,dword ptr [EAX]
006BE8AE  80 E5 FB                  AND CH,0xfb
006BE8B1  89 08                     MOV dword ptr [EAX],ECX
006BE8B3  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
LAB_006be8b8:
006BE8B8  8B 08                     MOV ECX,dword ptr [EAX]
006BE8BA  F6 C5 08                  TEST CH,0x8
006BE8BD  74 25                     JZ 0x006be8e4
006BE8BF  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
006BE8C2  49                        DEC ECX
006BE8C3  01 48 2C                  ADD dword ptr [EAX + 0x2c],ECX
006BE8C6  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE8CB  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
006BE8CE  F7 DA                     NEG EDX
006BE8D0  89 50 34                  MOV dword ptr [EAX + 0x34],EDX
006BE8D3  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE8D8  8B 08                     MOV ECX,dword ptr [EAX]
006BE8DA  80 E5 F7                  AND CH,0xf7
006BE8DD  89 08                     MOV dword ptr [EAX],ECX
006BE8DF  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
LAB_006be8e4:
006BE8E4  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
006BE8EA  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006BE8ED  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BE8F2  83 20 B9                  AND dword ptr [EAX],0xffffffb9
006BE8F5  A1 EC 4E 85 00            MOV EAX,[0x00854eec]
006BE8FA  40                        INC EAX
006BE8FB  A3 EC 4E 85 00            MOV [0x00854eec],EAX
006BE900  3B 05 A0 4F 85 00         CMP EAX,dword ptr [0x00854fa0]
006BE906  0F 8C FE FE FF FF         JL 0x006be80a
LAB_006be90c:
006BE90C  B9 0B 00 00 00            MOV ECX,0xb
006BE911  33 C0                     XOR EAX,EAX
006BE913  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BE919  8D BA 74 01 00 00         LEA EDI,[EDX + 0x174]
006BE91F  F3 AB                     STOSD.REP ES:EDI
006BE921  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BE927  8B BE 10 02 00 00         MOV EDI,dword ptr [ESI + 0x210]
006BE92D  3B FB                     CMP EDI,EBX
006BE92F  74 31                     JZ 0x006be962
006BE931  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BE937  83 C0 07                  ADD EAX,0x7
006BE93A  99                        CDQ
006BE93B  83 E2 07                  AND EDX,0x7
006BE93E  03 C2                     ADD EAX,EDX
006BE940  8B C8                     MOV ECX,EAX
006BE942  C1 F9 03                  SAR ECX,0x3
006BE945  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BE94C  33 C0                     XOR EAX,EAX
006BE94E  8B D1                     MOV EDX,ECX
006BE950  C1 E9 02                  SHR ECX,0x2
006BE953  F3 AB                     STOSD.REP ES:EDI
006BE955  8B CA                     MOV ECX,EDX
006BE957  83 E1 03                  AND ECX,0x3
006BE95A  F3 AA                     STOSB.REP ES:EDI
006BE95C  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006be962:
006BE962  8B BE 20 02 00 00         MOV EDI,dword ptr [ESI + 0x220]
006BE968  3B FB                     CMP EDI,EBX
006BE96A  74 4D                     JZ 0x006be9b9
006BE96C  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BE972  83 C0 07                  ADD EAX,0x7
006BE975  99                        CDQ
006BE976  83 E2 07                  AND EDX,0x7
006BE979  03 C2                     ADD EAX,EDX
006BE97B  8B C8                     MOV ECX,EAX
006BE97D  C1 F9 03                  SAR ECX,0x3
006BE980  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BE987  33 C0                     XOR EAX,EAX
006BE989  8B D1                     MOV EDX,ECX
006BE98B  C1 E9 02                  SHR ECX,0x2
006BE98E  F3 AB                     STOSD.REP ES:EDI
006BE990  8B CA                     MOV ECX,EDX
006BE992  83 E1 03                  AND ECX,0x3
006BE995  F3 AA                     STOSB.REP ES:EDI
006BE997  EB 1A                     JMP 0x006be9b3
LAB_006be9b3:
006BE9B3  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006be9b9:
006BE9B9  8B 36                     MOV ESI,dword ptr [ESI]
006BE9BB  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006BE9C2  74 0D                     JZ 0x006be9d1
006BE9C4  81 C6 F0 04 00 00         ADD ESI,0x4f0
006BE9CA  56                        PUSH ESI
006BE9CB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006be9d1:
006BE9D1  A1 E8 4E 85 00            MOV EAX,[0x00854ee8]
006BE9D6  8B 80 08 05 00 00         MOV EAX,dword ptr [EAX + 0x508]
006BE9DC  85 C0                     TEST EAX,EAX
006BE9DE  74 1A                     JZ 0x006be9fa
006BE9E0  50                        PUSH EAX
006BE9E1  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
006BE9E7  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BE9ED  81 C1 F0 04 00 00         ADD ECX,0x4f0
006BE9F3  51                        PUSH ECX
006BE9F4  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006be9fa:
006BE9FA  A1 E4 4F 85 00            MOV EAX,[0x00854fe4]
006BE9FF  85 C0                     TEST EAX,EAX
006BEA01  74 1E                     JZ 0x006bea21
006BEA03  68 DF 07 00 00            PUSH 0x7df
006BEA08  68 8C DC 7E 00            PUSH 0x7edc8c
006BEA0D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006BEA13  52                        PUSH EDX
006BEA14  50                        PUSH EAX
006BEA15  E8 26 74 FE FF            CALL 0x006a5e40
006BEA1A  A1 E4 4F 85 00            MOV EAX,[0x00854fe4]
006BEA1F  EB 02                     JMP 0x006bea23
LAB_006bea21:
006BEA21  33 C0                     XOR EAX,EAX
LAB_006bea23:
006BEA23  8D A5 50 FF FF FF         LEA ESP,[EBP + 0xffffff50]
006BEA29  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BEA2C  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006BEA33  5F                        POP EDI
006BEA34  5E                        POP ESI
006BEA35  5B                        POP EBX
006BEA36  8B E5                     MOV ESP,EBP
006BEA38  5D                        POP EBP
006BEA39  C2 08 00                  RET 0x8
