FUN_006c6100:
006C6100  55                        PUSH EBP
006C6101  8B EC                     MOV EBP,ESP
006C6103  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C6106  53                        PUSH EBX
006C6107  56                        PUSH ESI
006C6108  57                        PUSH EDI
006C6109  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C6110  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C6116  0F 85 99 00 00 00         JNZ 0x006c61b5
006C611C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C611F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C6122  83 F9 07                  CMP ECX,0x7
006C6125  75 47                     JNZ 0x006c616e
006C6127  3B D0                     CMP EDX,EAX
006C6129  0F 8F 56 01 00 00         JG 0x006c6285
006C612F  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006C6132  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C6135  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C6138  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c613b:
006C613B  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C613E  0F 8F 41 01 00 00         JG 0x006c6285
006C6144  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C6148  66 31 18                  XOR word ptr [EAX],BX
006C614B  85 C9                     TEST ECX,ECX
006C614D  7C 09                     JL 0x006c6158
006C614F  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C6152  83 C0 02                  ADD EAX,0x2
006C6155  2B CB                     SUB ECX,EBX
006C6157  42                        INC EDX
LAB_006c6158:
006C6158  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C615B  03 CF                     ADD ECX,EDI
006C615D  03 C3                     ADD EAX,EBX
006C615F  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C6162  46                        INC ESI
006C6163  3B D3                     CMP EDX,EBX
006C6165  7E D4                     JLE 0x006c613b
006C6167  5F                        POP EDI
006C6168  5E                        POP ESI
006C6169  5B                        POP EBX
006C616A  5D                        POP EBP
006C616B  C2 38 00                  RET 0x38
LAB_006c616e:
006C616E  3B D0                     CMP EDX,EAX
006C6170  0F 8F 0F 01 00 00         JG 0x006c6285
006C6176  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006C6179  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C617C  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C617F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c6182:
006C6182  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C6185  0F 8F FA 00 00 00         JG 0x006c6285
006C618B  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C618F  85 C9                     TEST ECX,ECX
006C6191  66 89 18                  MOV word ptr [EAX],BX
006C6194  7C 09                     JL 0x006c619f
006C6196  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C6199  83 C0 02                  ADD EAX,0x2
006C619C  2B CB                     SUB ECX,EBX
006C619E  42                        INC EDX
LAB_006c619f:
006C619F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C61A2  03 CF                     ADD ECX,EDI
006C61A4  03 C3                     ADD EAX,EBX
006C61A6  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C61A9  46                        INC ESI
006C61AA  3B D3                     CMP EDX,EBX
006C61AC  7E D4                     JLE 0x006c6182
006C61AE  5F                        POP EDI
006C61AF  5E                        POP ESI
006C61B0  5B                        POP EBX
006C61B1  5D                        POP EBP
006C61B2  C2 38 00                  RET 0x38
LAB_006c61b5:
006C61B5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C61B8  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C61BB  83 F9 07                  CMP ECX,0x7
006C61BE  75 6A                     JNZ 0x006c622a
006C61C0  3B D0                     CMP EDX,EAX
006C61C2  0F 8F BD 00 00 00         JG 0x006c6285
006C61C8  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006C61CB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C61CE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C61D1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c61d4:
006C61D4  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C61D7  0F 8F A8 00 00 00         JG 0x006c6285
006C61DD  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C61E0  85 5D 30                  TEST dword ptr [EBP + 0x30],EBX
006C61E3  74 06                     JZ 0x006c61eb
006C61E5  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C61E9  EB 08                     JMP 0x006c61f3
LAB_006c61eb:
006C61EB  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C61EE  83 FB FF                  CMP EBX,-0x1
006C61F1  74 03                     JZ 0x006c61f6
LAB_006c61f3:
006C61F3  66 31 18                  XOR word ptr [EAX],BX
LAB_006c61f6:
006C61F6  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C61F9  D1 EB                     SHR EBX,0x1
006C61FB  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006C61FE  75 07                     JNZ 0x006c6207
006C6200  C7 45 34 00 00 00 80      MOV dword ptr [EBP + 0x34],0x80000000
LAB_006c6207:
006C6207  85 C9                     TEST ECX,ECX
006C6209  7C 09                     JL 0x006c6214
006C620B  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C620E  83 C0 02                  ADD EAX,0x2
006C6211  2B CB                     SUB ECX,EBX
006C6213  42                        INC EDX
LAB_006c6214:
006C6214  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C6217  03 CF                     ADD ECX,EDI
006C6219  03 C3                     ADD EAX,EBX
006C621B  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C621E  46                        INC ESI
006C621F  3B D3                     CMP EDX,EBX
006C6221  7E B1                     JLE 0x006c61d4
006C6223  5F                        POP EDI
006C6224  5E                        POP ESI
006C6225  5B                        POP EBX
006C6226  5D                        POP EBP
006C6227  C2 38 00                  RET 0x38
LAB_006c622a:
006C622A  3B D0                     CMP EDX,EAX
006C622C  7F 57                     JG 0x006c6285
006C622E  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006C6231  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C6234  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006C6237  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c623a:
006C623A  3B 75 20                  CMP ESI,dword ptr [EBP + 0x20]
006C623D  7F 46                     JG 0x006c6285
006C623F  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C6242  85 5D 30                  TEST dword ptr [EBP + 0x30],EBX
006C6245  74 06                     JZ 0x006c624d
006C6247  66 8B 5D 38               MOV BX,word ptr [EBP + 0x38]
006C624B  EB 08                     JMP 0x006c6255
LAB_006c624d:
006C624D  8B 5D 3C                  MOV EBX,dword ptr [EBP + 0x3c]
006C6250  83 FB FF                  CMP EBX,-0x1
006C6253  74 03                     JZ 0x006c6258
LAB_006c6255:
006C6255  66 89 18                  MOV word ptr [EAX],BX
LAB_006c6258:
006C6258  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006C625B  D1 EB                     SHR EBX,0x1
006C625D  89 5D 34                  MOV dword ptr [EBP + 0x34],EBX
006C6260  75 07                     JNZ 0x006c6269
006C6262  C7 45 34 00 00 00 80      MOV dword ptr [EBP + 0x34],0x80000000
LAB_006c6269:
006C6269  85 C9                     TEST ECX,ECX
006C626B  7C 09                     JL 0x006c6276
006C626D  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
006C6270  83 C0 02                  ADD EAX,0x2
006C6273  2B CB                     SUB ECX,EBX
006C6275  42                        INC EDX
LAB_006c6276:
006C6276  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006C6279  03 CF                     ADD ECX,EDI
006C627B  03 C3                     ADD EAX,EBX
006C627D  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006C6280  46                        INC ESI
006C6281  3B D3                     CMP EDX,EBX
006C6283  7E B5                     JLE 0x006c623a
LAB_006c6285:
006C6285  5F                        POP EDI
006C6286  5E                        POP ESI
006C6287  5B                        POP EBX
006C6288  5D                        POP EBP
006C6289  C2 38 00                  RET 0x38
