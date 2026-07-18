FUN_006bc630:
006BC630  8B 0D A0 4F 85 00         MOV ECX,dword ptr [0x00854fa0]
006BC636  53                        PUSH EBX
006BC637  33 DB                     XOR EBX,EBX
006BC639  33 C0                     XOR EAX,EAX
006BC63B  3B CB                     CMP ECX,EBX
006BC63D  89 1D C8 4F 85 00         MOV dword ptr [0x00854fc8],EBX
006BC643  A3 EC 4E 85 00            MOV [0x00854eec],EAX
006BC648  0F 8E 98 02 00 00         JLE 0x006bc8e6
006BC64E  56                        PUSH ESI
006BC64F  57                        PUSH EDI
LAB_006bc650:
006BC650  8B 0D C0 4F 85 00         MOV ECX,dword ptr [0x00854fc0]
006BC656  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006BC659  A3 D0 4F 85 00            MOV [0x00854fd0],EAX
006BC65E  8B 08                     MOV ECX,dword ptr [EAX]
006BC660  F6 C5 40                  TEST CH,0x40
006BC663  74 5C                     JZ 0x006bc6c1
006BC665  8B 48 30                  MOV ECX,dword ptr [EAX + 0x30]
006BC668  3B CB                     CMP ECX,EBX
006BC66A  7D 27                     JGE 0x006bc693
006BC66C  8B 78 28                  MOV EDI,dword ptr [EAX + 0x28]
006BC66F  41                        INC ECX
006BC670  03 F9                     ADD EDI,ECX
006BC672  89 78 28                  MOV dword ptr [EAX + 0x28],EDI
006BC675  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC67A  8B 50 30                  MOV EDX,dword ptr [EAX + 0x30]
006BC67D  F7 DA                     NEG EDX
006BC67F  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
006BC682  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC687  8B 08                     MOV ECX,dword ptr [EAX]
006BC689  80 CD 04                  OR CH,0x4
006BC68C  89 08                     MOV dword ptr [EAX],ECX
006BC68E  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
LAB_006bc693:
006BC693  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
006BC696  3B CB                     CMP ECX,EBX
006BC698  7D 27                     JGE 0x006bc6c1
006BC69A  8B 70 2C                  MOV ESI,dword ptr [EAX + 0x2c]
006BC69D  41                        INC ECX
006BC69E  03 F1                     ADD ESI,ECX
006BC6A0  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
006BC6A3  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC6A8  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
006BC6AB  F7 D9                     NEG ECX
006BC6AD  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
006BC6B0  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC6B5  8B 08                     MOV ECX,dword ptr [EAX]
006BC6B7  80 CD 08                  OR CH,0x8
006BC6BA  89 08                     MOV dword ptr [EAX],ECX
006BC6BC  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
LAB_006bc6c1:
006BC6C1  F6 00 24                  TEST byte ptr [EAX],0x24
006BC6C4  0F 84 DC 01 00 00         JZ 0x006bc8a6
006BC6CA  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
006BC6CD  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BC6D3  8B F1                     MOV ESI,ECX
006BC6D5  89 0D 9C 4F 85 00         MOV dword ptr [0x00854f9c],ECX
006BC6DB  C1 E6 04                  SHL ESI,0x4
006BC6DE  8D 74 16 14               LEA ESI,[ESI + EDX*0x1 + 0x14]
006BC6E2  89 35 90 4F 85 00         MOV dword ptr [0x00854f90],ESI
006BC6E8  8B B4 8A 74 01 00 00      MOV ESI,dword ptr [EDX + ECX*0x4 + 0x174]
006BC6EF  89 35 50 4F 85 00         MOV dword ptr [0x00854f50],ESI
006BC6F5  8B 94 CA 1C 01 00 00      MOV EDX,dword ptr [EDX + ECX*0x8 + 0x11c]
006BC6FC  8B 70 28                  MOV ESI,dword ptr [EAX + 0x28]
006BC6FF  03 F2                     ADD ESI,EDX
006BC701  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
006BC704  8B 0D D4 4F 85 00         MOV ECX,dword ptr [0x00854fd4]
006BC70A  8B 15 9C 4F 85 00         MOV EDX,dword ptr [0x00854f9c]
006BC710  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC715  8B 8C D1 20 01 00 00      MOV ECX,dword ptr [ECX + EDX*0x8 + 0x120]
006BC71C  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
006BC71F  03 D1                     ADD EDX,ECX
006BC721  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
006BC724  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC729  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BC72F  8B 0D 9C 4F 85 00         MOV ECX,dword ptr [0x00854f9c]
006BC735  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
006BC738  8B 94 CA 1C 01 00 00      MOV EDX,dword ptr [EDX + ECX*0x8 + 0x11c]
006BC73F  03 FA                     ADD EDI,EDX
006BC741  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
006BC744  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC749  8B 0D 9C 4F 85 00         MOV ECX,dword ptr [0x00854f9c]
006BC74F  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BC755  8B 70 1C                  MOV ESI,dword ptr [EAX + 0x1c]
006BC758  8B 8C CA 20 01 00 00      MOV ECX,dword ptr [EDX + ECX*0x8 + 0x120]
006BC75F  03 F1                     ADD ESI,ECX
006BC761  89 70 1C                  MOV dword ptr [EAX + 0x1c],ESI
006BC764  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC769  8B 08                     MOV ECX,dword ptr [EAX]
006BC76B  F7 C1 00 00 04 00         TEST ECX,0x40000
006BC771  74 0A                     JZ 0x006bc77d
006BC773  83 E1 FD                  AND ECX,0xfffffffd
006BC776  89 08                     MOV dword ptr [EAX],ECX
006BC778  E9 10 01 00 00            JMP 0x006bc88d
LAB_006bc77d:
006BC77D  F6 C5 40                  TEST CH,0x40
006BC780  74 28                     JZ 0x006bc7aa
006BC782  8B 0D 90 4F 85 00         MOV ECX,dword ptr [0x00854f90]
006BC788  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006BC78B  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
006BC78E  7D 50                     JGE 0x006bc7e0
006BC790  8B 70 30                  MOV ESI,dword ptr [EAX + 0x30]
006BC793  03 F2                     ADD ESI,EDX
006BC795  8B 11                     MOV EDX,dword ptr [ECX]
006BC797  3B F2                     CMP ESI,EDX
006BC799  7E 45                     JLE 0x006bc7e0
006BC79B  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
006BC79E  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006BC7A1  3B D6                     CMP EDX,ESI
006BC7A3  7D 3B                     JGE 0x006bc7e0
006BC7A5  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
006BC7A8  EB 26                     JMP 0x006bc7d0
LAB_006bc7aa:
006BC7AA  8B 0D 90 4F 85 00         MOV ECX,dword ptr [0x00854f90]
006BC7B0  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
006BC7B3  3B 51 08                  CMP EDX,dword ptr [ECX + 0x8]
006BC7B6  7D 28                     JGE 0x006bc7e0
006BC7B8  8B 70 38                  MOV ESI,dword ptr [EAX + 0x38]
006BC7BB  03 F2                     ADD ESI,EDX
006BC7BD  8B 11                     MOV EDX,dword ptr [ECX]
006BC7BF  3B F2                     CMP ESI,EDX
006BC7C1  7E 1D                     JLE 0x006bc7e0
006BC7C3  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006BC7C6  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006BC7C9  3B D6                     CMP EDX,ESI
006BC7CB  7D 13                     JGE 0x006bc7e0
006BC7CD  8B 70 3C                  MOV ESI,dword ptr [EAX + 0x3c]
LAB_006bc7d0:
006BC7D0  03 F2                     ADD ESI,EDX
006BC7D2  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006BC7D5  3B F2                     CMP ESI,EDX
006BC7D7  7E 07                     JLE 0x006bc7e0
006BC7D9  BE 01 00 00 00            MOV ESI,0x1
006BC7DE  EB 02                     JMP 0x006bc7e2
LAB_006bc7e0:
006BC7E0  33 F6                     XOR ESI,ESI
LAB_006bc7e2:
006BC7E2  89 35 D0 4E 85 00         MOV dword ptr [0x00854ed0],ESI
006BC7E8  8B 10                     MOV EDX,dword ptr [EAX]
006BC7EA  F6 C2 20                  TEST DL,0x20
006BC7ED  0F 84 95 00 00 00         JZ 0x006bc888
006BC7F3  3B F3                     CMP ESI,EBX
006BC7F5  0F 84 8D 00 00 00         JZ 0x006bc888
006BC7FB  83 78 20 FF               CMP dword ptr [EAX + 0x20],-0x1
006BC7FF  75 11                     JNZ 0x006bc812
006BC801  50                        PUSH EAX
006BC802  E8 49 31 01 00            CALL 0x006cf950
006BC807  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC80C  8B 0D 90 4F 85 00         MOV ECX,dword ptr [0x00854f90]
LAB_006bc812:
006BC812  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006BC815  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
006BC818  3B D6                     CMP EDX,ESI
006BC81A  7D 67                     JGE 0x006bc883
006BC81C  8B 78 30                  MOV EDI,dword ptr [EAX + 0x30]
006BC81F  8B 31                     MOV ESI,dword ptr [ECX]
006BC821  03 D7                     ADD EDX,EDI
006BC823  3B D6                     CMP EDX,ESI
006BC825  7E 5C                     JLE 0x006bc883
006BC827  8B 50 2C                  MOV EDX,dword ptr [EAX + 0x2c]
006BC82A  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
006BC82D  3B D6                     CMP EDX,ESI
006BC82F  7D 52                     JGE 0x006bc883
006BC831  8B 70 34                  MOV ESI,dword ptr [EAX + 0x34]
006BC834  03 D6                     ADD EDX,ESI
006BC836  3B 51 04                  CMP EDX,dword ptr [ECX + 0x4]
006BC839  7E 48                     JLE 0x006bc883
006BC83B  8B 08                     MOV ECX,dword ptr [EAX]
006BC83D  F6 C1 20                  TEST CL,0x20
006BC840  74 64                     JZ 0x006bc8a6
006BC842  3B FB                     CMP EDI,EBX
006BC844  7E 31                     JLE 0x006bc877
006BC846  3B F3                     CMP ESI,EBX
006BC848  7E 2D                     JLE 0x006bc877
006BC84A  83 C9 40                  OR ECX,0x40
006BC84D  89 08                     MOV dword ptr [EAX],ECX
006BC84F  8B 35 C8 4F 85 00         MOV ESI,dword ptr [0x00854fc8]
006BC855  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
006BC85A  46                        INC ESI
006BC85B  89 35 C8 4F 85 00         MOV dword ptr [0x00854fc8],ESI
006BC861  8B 08                     MOV ECX,dword ptr [EAX]
006BC863  F6 C1 01                  TEST CL,0x1
006BC866  74 08                     JZ 0x006bc870
006BC868  39 1D 50 4F 85 00         CMP dword ptr [0x00854f50],EBX
006BC86E  74 36                     JZ 0x006bc8a6
LAB_006bc870:
006BC870  83 C9 06                  OR ECX,0x6
006BC873  89 08                     MOV dword ptr [EAX],ECX
006BC875  EB 2A                     JMP 0x006bc8a1
LAB_006bc877:
006BC877  F6 C1 01                  TEST CL,0x1
006BC87A  74 2A                     JZ 0x006bc8a6
006BC87C  83 C9 04                  OR ECX,0x4
006BC87F  89 08                     MOV dword ptr [EAX],ECX
006BC881  EB 1E                     JMP 0x006bc8a1
LAB_006bc883:
006BC883  83 20 FD                  AND dword ptr [EAX],0xfffffffd
006BC886  EB 05                     JMP 0x006bc88d
LAB_006bc888:
006BC888  83 E2 FD                  AND EDX,0xfffffffd
006BC88B  89 10                     MOV dword ptr [EAX],EDX
LAB_006bc88d:
006BC88D  8B 0D D0 4F 85 00         MOV ECX,dword ptr [0x00854fd0]
006BC893  8B 01                     MOV EAX,dword ptr [ECX]
006BC895  A8 01                     TEST AL,0x1
006BC897  74 04                     JZ 0x006bc89d
006BC899  0C 04                     OR AL,0x4
006BC89B  EB 02                     JMP 0x006bc89f
LAB_006bc89d:
006BC89D  24 FB                     AND AL,0xfb
LAB_006bc89f:
006BC89F  89 01                     MOV dword ptr [ECX],EAX
LAB_006bc8a1:
006BC8A1  A1 D0 4F 85 00            MOV EAX,[0x00854fd0]
LAB_006bc8a6:
006BC8A6  F7 00 0E 50 00 00         TEST dword ptr [EAX],0x500e
006BC8AC  75 16                     JNZ 0x006bc8c4
006BC8AE  39 1D 98 4F 85 00         CMP dword ptr [0x00854f98],EBX
006BC8B4  75 0E                     JNZ 0x006bc8c4
006BC8B6  89 58 68                  MOV dword ptr [EAX + 0x68],EBX
006BC8B9  8B 15 D0 4F 85 00         MOV EDX,dword ptr [0x00854fd0]
006BC8BF  89 5A 6C                  MOV dword ptr [EDX + 0x6c],EBX
006BC8C2  EB 07                     JMP 0x006bc8cb
LAB_006bc8c4:
006BC8C4  C7 40 68 05 00 00 00      MOV dword ptr [EAX + 0x68],0x5
LAB_006bc8cb:
006BC8CB  A1 EC 4E 85 00            MOV EAX,[0x00854eec]
006BC8D0  8B 0D A0 4F 85 00         MOV ECX,dword ptr [0x00854fa0]
006BC8D6  40                        INC EAX
006BC8D7  3B C1                     CMP EAX,ECX
006BC8D9  A3 EC 4E 85 00            MOV [0x00854eec],EAX
006BC8DE  0F 8C 6C FD FF FF         JL 0x006bc650
006BC8E4  5F                        POP EDI
006BC8E5  5E                        POP ESI
LAB_006bc8e6:
006BC8E6  5B                        POP EBX
006BC8E7  C3                        RET
