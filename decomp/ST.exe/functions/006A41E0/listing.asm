FUN_006a41e0:
006A41E0  55                        PUSH EBP
006A41E1  8B EC                     MOV EBP,ESP
006A41E3  83 EC 08                  SUB ESP,0x8
006A41E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A41E9  53                        PUSH EBX
006A41EA  56                        PUSH ESI
006A41EB  57                        PUSH EDI
006A41EC  85 C0                     TEST EAX,EAX
006A41EE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006A41F5  75 1F                     JNZ 0x006a4216
006A41F7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A41FA  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A41FD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A4200  50                        PUSH EAX
006A4201  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A4204  51                        PUSH ECX
006A4205  52                        PUSH EDX
006A4206  50                        PUSH EAX
006A4207  E8 F8 CE D5 FF            CALL 0x00401104
006A420C  83 C4 10                  ADD ESP,0x10
006A420F  5F                        POP EDI
006A4210  5E                        POP ESI
006A4211  5B                        POP EBX
006A4212  8B E5                     MOV ESP,EBP
006A4214  5D                        POP EBP
006A4215  C3                        RET
LAB_006a4216:
006A4216  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A4219  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006A421C  85 C9                     TEST ECX,ECX
006A421E  74 1A                     JZ 0x006a423a
006A4220  85 FF                     TEST EDI,EDI
006A4222  75 16                     JNZ 0x006a423a
006A4224  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A4227  51                        PUSH ECX
006A4228  50                        PUSH EAX
006A4229  E8 DE 02 D6 FF            CALL 0x0040450c
006A422E  83 C4 08                  ADD ESP,0x8
006A4231  33 C0                     XOR EAX,EAX
006A4233  5F                        POP EDI
006A4234  5E                        POP ESI
006A4235  5B                        POP EBX
006A4236  8B E5                     MOV ESP,EBP
006A4238  5D                        POP EBP
006A4239  C3                        RET
LAB_006a423a:
006A423A  F6 05 78 C1 7E 00 04      TEST byte ptr [0x007ec178],0x4
006A4241  74 29                     JZ 0x006a426c
006A4243  E8 CB 0A D6 FF            CALL 0x00404d13
006A4248  85 C0                     TEST EAX,EAX
006A424A  75 20                     JNZ 0x006a426c
006A424C  68 BC C2 7E 00            PUSH 0x7ec2bc
006A4251  50                        PUSH EAX
006A4252  68 7A 02 00 00            PUSH 0x27a
006A4257  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A425C  6A 02                     PUSH 0x2
006A425E  E8 3D CD 08 00            CALL 0x00730fa0
006A4263  83 C4 14                  ADD ESP,0x14
006A4266  83 F8 01                  CMP EAX,0x1
006A4269  75 01                     JNZ 0x006a426c
006A426B  CC                        INT3
LAB_006a426c:
006A426C  A1 7C C1 7E 00            MOV EAX,[0x007ec17c]
006A4271  8B 0D 80 C1 7E 00         MOV ECX,dword ptr [0x007ec180]
006A4277  3B C1                     CMP EAX,ECX
006A4279  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A427C  75 01                     JNZ 0x006a427f
006A427E  CC                        INT3
LAB_006a427f:
006A427F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A4282  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A4285  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006A4288  52                        PUSH EDX
006A4289  53                        PUSH EBX
006A428A  50                        PUSH EAX
006A428B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A428E  56                        PUSH ESI
006A428F  57                        PUSH EDI
006A4290  50                        PUSH EAX
006A4291  6A 02                     PUSH 0x2
006A4293  FF 15 98 14 7F 00         CALL dword ptr [0x007f1498]
006A4299  83 C4 1C                  ADD ESP,0x1c
006A429C  85 C0                     TEST EAX,EAX
006A429E  75 52                     JNZ 0x006a42f2
006A42A0  85 DB                     TEST EBX,EBX
006A42A2  74 25                     JZ 0x006a42c9
006A42A4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A42A7  51                        PUSH ECX
006A42A8  53                        PUSH EBX
006A42A9  68 4C C4 7E 00            PUSH 0x7ec44c
006A42AE  50                        PUSH EAX
006A42AF  50                        PUSH EAX
006A42B0  50                        PUSH EAX
006A42B1  50                        PUSH EAX
006A42B2  E8 E9 CC 08 00            CALL 0x00730fa0
006A42B7  83 C4 1C                  ADD ESP,0x1c
006A42BA  83 F8 01                  CMP EAX,0x1
006A42BD  75 2A                     JNZ 0x006a42e9
006A42BF  CC                        INT3
LAB_006a42c9:
006A42C9  68 20 C4 7E 00            PUSH 0x7ec420
006A42CE  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A42D3  6A 00                     PUSH 0x0
006A42D5  6A 00                     PUSH 0x0
006A42D7  6A 00                     PUSH 0x0
006A42D9  6A 00                     PUSH 0x0
006A42DB  E8 C0 CC 08 00            CALL 0x00730fa0
006A42E0  83 C4 18                  ADD ESP,0x18
006A42E3  83 F8 01                  CMP EAX,0x1
006A42E6  75 01                     JNZ 0x006a42e9
006A42E8  CC                        INT3
LAB_006a42e9:
006A42E9  5F                        POP EDI
006A42EA  5E                        POP ESI
006A42EB  33 C0                     XOR EAX,EAX
006A42ED  5B                        POP EBX
006A42EE  8B E5                     MOV ESP,EBP
006A42F0  5D                        POP EBP
006A42F1  C3                        RET
LAB_006a42f2:
006A42F2  83 FF DB                  CMP EDI,-0x25
006A42F5  76 49                     JBE 0x006a4340
006A42F7  57                        PUSH EDI
006A42F8  68 F4 C3 7E 00            PUSH 0x7ec3f4
006A42FD  85 DB                     TEST EBX,EBX
006A42FF  6A 00                     PUSH 0x0
006A4301  6A 00                     PUSH 0x0
006A4303  74 1B                     JZ 0x006a4320
006A4305  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A4308  52                        PUSH EDX
006A4309  53                        PUSH EBX
006A430A  E8 C1 91 00 00            CALL 0x006ad4d0
006A430F  83 C4 18                  ADD ESP,0x18
006A4312  85 C0                     TEST EAX,EAX
006A4314  74 21                     JZ 0x006a4337
006A4316  CC                        INT3
LAB_006a4320:
006A4320  68 94 02 00 00            PUSH 0x294
006A4325  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A432A  E8 A1 91 00 00            CALL 0x006ad4d0
006A432F  83 C4 18                  ADD ESP,0x18
006A4332  85 C0                     TEST EAX,EAX
006A4334  74 01                     JZ 0x006a4337
006A4336  CC                        INT3
LAB_006a4337:
006A4337  5F                        POP EDI
006A4338  5E                        POP ESI
006A4339  33 C0                     XOR EAX,EAX
006A433B  5B                        POP EBX
006A433C  8B E5                     MOV ESP,EBP
006A433E  5D                        POP EBP
006A433F  C3                        RET
LAB_006a4340:
006A4340  83 FE 01                  CMP ESI,0x1
006A4343  74 31                     JZ 0x006a4376
006A4345  8B C6                     MOV EAX,ESI
006A4347  25 FF FF 00 00            AND EAX,0xffff
006A434C  83 F8 04                  CMP EAX,0x4
006A434F  74 25                     JZ 0x006a4376
006A4351  83 F8 02                  CMP EAX,0x2
006A4354  74 20                     JZ 0x006a4376
006A4356  68 18 C2 7E 00            PUSH 0x7ec218
006A435B  68 CC 4C 7A 00            PUSH 0x7a4ccc
006A4360  6A 00                     PUSH 0x0
006A4362  6A 00                     PUSH 0x0
006A4364  6A 00                     PUSH 0x0
006A4366  6A 01                     PUSH 0x1
006A4368  E8 33 CC 08 00            CALL 0x00730fa0
006A436D  83 C4 18                  ADD ESP,0x18
006A4370  83 F8 01                  CMP EAX,0x1
006A4373  75 01                     JNZ 0x006a4376
006A4375  CC                        INT3
LAB_006a4376:
006A4376  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A4379  50                        PUSH EAX
006A437A  E8 EF 0D D6 FF            CALL 0x0040516e
006A437F  83 C4 04                  ADD ESP,0x4
006A4382  85 C0                     TEST EAX,EAX
006A4384  75 51                     JNZ 0x006a43d7
006A4386  85 DB                     TEST EBX,EBX
006A4388  74 1F                     JZ 0x006a43a9
006A438A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A438D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A4390  51                        PUSH ECX
006A4391  68 CC C3 7E 00            PUSH 0x7ec3cc
006A4396  50                        PUSH EAX
006A4397  50                        PUSH EAX
006A4398  52                        PUSH EDX
006A4399  53                        PUSH EBX
006A439A  E8 31 91 00 00            CALL 0x006ad4d0
006A439F  83 C4 18                  ADD ESP,0x18
006A43A2  85 C0                     TEST EAX,EAX
006A43A4  74 27                     JZ 0x006a43cd
006A43A6  CC                        INT3
LAB_006a43a9:
006A43A9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A43AC  50                        PUSH EAX
006A43AD  68 CC C3 7E 00            PUSH 0x7ec3cc
006A43B2  6A 00                     PUSH 0x0
006A43B4  6A 00                     PUSH 0x0
006A43B6  68 A9 02 00 00            PUSH 0x2a9
006A43BB  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A43C0  E8 0B 91 00 00            CALL 0x006ad4d0
006A43C5  83 C4 18                  ADD ESP,0x18
006A43C8  85 C0                     TEST EAX,EAX
006A43CA  74 01                     JZ 0x006a43cd
006A43CC  CC                        INT3
LAB_006a43cd:
006A43CD  C7 05 4C 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a4c],0x1
LAB_006a43d7:
006A43D7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A43DA  8B 41 F4                  MOV EAX,dword ptr [ECX + -0xc]
006A43DD  8D 59 E0                  LEA EBX,[ECX + -0x20]
006A43E0  83 F8 03                  CMP EAX,0x3
006A43E3  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006A43E6  75 46                     JNZ 0x006a442e
006A43E8  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006A43EB  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006A43F2  3D BC BA DC FE            CMP EAX,0xfedcbabc
006A43F7  75 0B                     JNZ 0x006a4404
006A43F9  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
006A43FC  85 C0                     TEST EAX,EAX
006A43FE  0F 84 B3 00 00 00         JZ 0x006a44b7
LAB_006a4404:
006A4404  68 78 C3 7E 00            PUSH 0x7ec378
006A4409  6A 00                     PUSH 0x0
006A440B  68 B5 02 00 00            PUSH 0x2b5
006A4410  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A4415  6A 02                     PUSH 0x2
006A4417  E8 84 CB 08 00            CALL 0x00730fa0
006A441C  83 C4 14                  ADD ESP,0x14
006A441F  83 F8 01                  CMP EAX,0x1
006A4422  0F 85 8F 00 00 00         JNZ 0x006a44b7
006A4428  CC                        INT3
LAB_006a442e:
006A442E  8B D0                     MOV EDX,EAX
006A4430  81 E2 FF FF 00 00         AND EDX,0xffff
006A4436  83 FA 02                  CMP EDX,0x2
006A4439  75 0F                     JNZ 0x006a444a
006A443B  8B CE                     MOV ECX,ESI
006A443D  81 E1 FF FF 00 00         AND ECX,0xffff
006A4443  83 F9 01                  CMP ECX,0x1
006A4446  75 02                     JNZ 0x006a444a
006A4448  8B F2                     MOV ESI,EDX
LAB_006a444a:
006A444A  33 C6                     XOR EAX,ESI
006A444C  A9 FF FF 00 00            TEST EAX,0xffff
006A4451  74 64                     JZ 0x006a44b7
006A4453  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006A4456  85 F6                     TEST ESI,ESI
006A4458  74 28                     JZ 0x006a4482
006A445A  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006A445D  52                        PUSH EDX
006A445E  53                        PUSH EBX
006A445F  E8 8C 03 00 00            CALL 0x006a47f0
006A4464  50                        PUSH EAX
006A4465  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A4468  68 50 C3 7E 00            PUSH 0x7ec350
006A446D  6A 00                     PUSH 0x0
006A446F  6A 00                     PUSH 0x0
006A4471  50                        PUSH EAX
006A4472  56                        PUSH ESI
006A4473  E8 58 90 00 00            CALL 0x006ad4d0
006A4478  83 C4 1C                  ADD ESP,0x1c
006A447B  85 C0                     TEST EAX,EAX
006A447D  74 2E                     JZ 0x006a44ad
006A447F  CC                        INT3
LAB_006a4482:
006A4482  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006A4485  51                        PUSH ECX
006A4486  53                        PUSH EBX
006A4487  E8 64 03 00 00            CALL 0x006a47f0
006A448C  50                        PUSH EAX
006A448D  68 50 C3 7E 00            PUSH 0x7ec350
006A4492  6A 00                     PUSH 0x0
006A4494  6A 00                     PUSH 0x0
006A4496  68 C0 02 00 00            PUSH 0x2c0
006A449B  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A44A0  E8 2B 90 00 00            CALL 0x006ad4d0
006A44A5  83 C4 1C                  ADD ESP,0x1c
006A44A8  85 C0                     TEST EAX,EAX
006A44AA  74 01                     JZ 0x006a44ad
006A44AC  CC                        INT3
LAB_006a44ad:
006A44AD  C7 05 4C 4A 85 00 01 00 00 00  MOV dword ptr [0x00854a4c],0x1
LAB_006a44b7:
006A44B7  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A44BA  85 C0                     TEST EAX,EAX
006A44BC  74 1A                     JZ 0x006a44d8
006A44BE  8D 57 24                  LEA EDX,[EDI + 0x24]
006A44C1  52                        PUSH EDX
006A44C2  53                        PUSH EBX
006A44C3  E8 08 D2 08 00            CALL 0x007316d0
006A44C8  8B F0                     MOV ESI,EAX
006A44CA  83 C4 08                  ADD ESP,0x8
006A44CD  85 F6                     TEST ESI,ESI
006A44CF  75 21                     JNZ 0x006a44f2
006A44D1  5F                        POP EDI
006A44D2  5E                        POP ESI
006A44D3  5B                        POP EBX
006A44D4  8B E5                     MOV ESP,EBP
006A44D6  5D                        POP EBP
006A44D7  C3                        RET
LAB_006a44d8:
006A44D8  8D 47 24                  LEA EAX,[EDI + 0x24]
006A44DB  50                        PUSH EAX
006A44DC  53                        PUSH EBX
006A44DD  E8 5E D1 08 00            CALL 0x00731640
006A44E2  8B F0                     MOV ESI,EAX
006A44E4  83 C4 08                  ADD ESP,0x8
006A44E7  85 F6                     TEST ESI,ESI
006A44E9  75 07                     JNZ 0x006a44f2
006A44EB  5F                        POP EDI
006A44EC  5E                        POP ESI
006A44ED  5B                        POP EBX
006A44EE  8B E5                     MOV ESP,EBP
006A44F0  5D                        POP EBP
006A44F1  C3                        RET
LAB_006a44f2:
006A44F2  8B 0D 7C C1 7E 00         MOV ECX,dword ptr [0x007ec17c]
006A44F8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A44FB  41                        INC ECX
006A44FC  85 C0                     TEST EAX,EAX
006A44FE  89 0D 7C C1 7E 00         MOV dword ptr [0x007ec17c],ECX
006A4504  75 37                     JNZ 0x006a453d
006A4506  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A4509  8B 15 68 49 85 00         MOV EDX,dword ptr [0x00854968]
006A450F  8B CF                     MOV ECX,EDI
006A4511  2B C8                     SUB ECX,EAX
006A4513  03 D1                     ADD EDX,ECX
006A4515  8B 0D 48 4A 85 00         MOV ECX,dword ptr [0x00854a48]
006A451B  89 15 68 49 85 00         MOV dword ptr [0x00854968],EDX
006A4521  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006A4524  8B D7                     MOV EDX,EDI
006A4526  2B D0                     SUB EDX,EAX
006A4528  A1 44 4A 85 00            MOV EAX,[0x00854a44]
006A452D  03 C2                     ADD EAX,EDX
006A452F  3B C1                     CMP EAX,ECX
006A4531  A3 44 4A 85 00            MOV [0x00854a44],EAX
006A4536  76 05                     JBE 0x006a453d
006A4538  A3 48 4A 85 00            MOV [0x00854a48],EAX
LAB_006a453d:
006A453D  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006A4540  3B FA                     CMP EDI,EDX
006A4542  76 2F                     JBE 0x006a4573
006A4544  33 C0                     XOR EAX,EAX
006A4546  8B CF                     MOV ECX,EDI
006A4548  A0 86 C1 7E 00            MOV AL,[0x007ec186]
006A454D  2B CA                     SUB ECX,EDX
006A454F  8A D8                     MOV BL,AL
006A4551  8D 7C 32 20               LEA EDI,[EDX + ESI*0x1 + 0x20]
006A4555  8A FB                     MOV BH,BL
006A4557  8B D1                     MOV EDX,ECX
006A4559  8B C3                     MOV EAX,EBX
006A455B  C1 E0 10                  SHL EAX,0x10
006A455E  66 8B C3                  MOV AX,BX
006A4561  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006A4564  C1 E9 02                  SHR ECX,0x2
006A4567  F3 AB                     STOSD.REP ES:EDI
006A4569  8B CA                     MOV ECX,EDX
006A456B  83 E1 03                  AND ECX,0x3
006A456E  F3 AA                     STOSB.REP ES:EDI
006A4570  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006a4573:
006A4573  A1 84 C1 7E 00            MOV EAX,[0x007ec184]
006A4578  25 FF 00 00 00            AND EAX,0xff
006A457D  8A C8                     MOV CL,AL
006A457F  8D 46 20                  LEA EAX,[ESI + 0x20]
006A4582  8A D1                     MOV DL,CL
006A4584  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006A4587  8A F2                     MOV DH,DL
006A4589  03 C7                     ADD EAX,EDI
006A458B  8B CA                     MOV ECX,EDX
006A458D  C1 E1 10                  SHL ECX,0x10
006A4590  66 8B CA                  MOV CX,DX
006A4593  89 08                     MOV dword ptr [EAX],ECX
006A4595  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A4598  85 C0                     TEST EAX,EAX
006A459A  75 12                     JNZ 0x006a45ae
006A459C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A459F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A45A2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A45A5  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006A45A8  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006A45AB  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
LAB_006a45ae:
006A45AE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A45B1  89 7E 10                  MOV dword ptr [ESI + 0x10],EDI
006A45B4  85 C0                     TEST EAX,EAX
006A45B6  75 29                     JNZ 0x006a45e1
006A45B8  3B F3                     CMP ESI,EBX
006A45BA  0F 84 D9 00 00 00         JZ 0x006a4699
006A45C0  68 14 C3 7E 00            PUSH 0x7ec314
006A45C5  6A 00                     PUSH 0x0
006A45C7  68 F8 02 00 00            PUSH 0x2f8
006A45CC  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A45D1  6A 02                     PUSH 0x2
006A45D3  E8 C8 C9 08 00            CALL 0x00730fa0
006A45D8  83 C4 14                  ADD ESP,0x14
006A45DB  83 F8 01                  CMP EAX,0x1
006A45DE  75 01                     JNZ 0x006a45e1
006A45E0  CC                        INT3
LAB_006a45e1:
006A45E1  3B F3                     CMP ESI,EBX
006A45E3  0F 84 B0 00 00 00         JZ 0x006a4699
006A45E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A45EC  85 C0                     TEST EAX,EAX
006A45EE  0F 85 A5 00 00 00         JNZ 0x006a4699
006A45F4  8B 06                     MOV EAX,dword ptr [ESI]
006A45F6  85 C0                     TEST EAX,EAX
006A45F8  74 08                     JZ 0x006a4602
006A45FA  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006A45FD  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006A4600  EB 32                     JMP 0x006a4634
LAB_006a4602:
006A4602  39 1D 64 49 85 00         CMP dword ptr [0x00854964],EBX
006A4608  74 21                     JZ 0x006a462b
006A460A  68 F4 C2 7E 00            PUSH 0x7ec2f4
006A460F  6A 00                     PUSH 0x0
006A4611  68 07 03 00 00            PUSH 0x307
006A4616  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A461B  6A 02                     PUSH 0x2
006A461D  E8 7E C9 08 00            CALL 0x00730fa0
006A4622  83 C4 14                  ADD ESP,0x14
006A4625  83 F8 01                  CMP EAX,0x1
006A4628  75 01                     JNZ 0x006a462b
006A462A  CC                        INT3
LAB_006a462b:
006A462B  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006A462E  89 15 64 49 85 00         MOV dword ptr [0x00854964],EDX
LAB_006a4634:
006A4634  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006A4637  85 C0                     TEST EAX,EAX
006A4639  74 0B                     JZ 0x006a4646
006A463B  8B 0E                     MOV ECX,dword ptr [ESI]
006A463D  89 08                     MOV dword ptr [EAX],ECX
006A463F  A1 6C 49 85 00            MOV EAX,[0x0085496c]
006A4644  EB 30                     JMP 0x006a4676
LAB_006a4646:
006A4646  39 1D 6C 49 85 00         CMP dword ptr [0x0085496c],EBX
006A464C  74 21                     JZ 0x006a466f
006A464E  68 D4 C2 7E 00            PUSH 0x7ec2d4
006A4653  6A 00                     PUSH 0x0
006A4655  68 12 03 00 00            PUSH 0x312
006A465A  68 D0 C1 7E 00            PUSH 0x7ec1d0
006A465F  6A 02                     PUSH 0x2
006A4661  E8 3A C9 08 00            CALL 0x00730fa0
006A4666  83 C4 14                  ADD ESP,0x14
006A4669  83 F8 01                  CMP EAX,0x1
006A466C  75 01                     JNZ 0x006a466f
006A466E  CC                        INT3
LAB_006a466f:
006A466F  8B 06                     MOV EAX,dword ptr [ESI]
006A4671  A3 6C 49 85 00            MOV [0x0085496c],EAX
LAB_006a4676:
006A4676  85 C0                     TEST EAX,EAX
006A4678  74 0A                     JZ 0x006a4684
006A467A  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
006A467D  A1 6C 49 85 00            MOV EAX,[0x0085496c]
006A4682  EB 06                     JMP 0x006a468a
LAB_006a4684:
006A4684  89 35 64 49 85 00         MOV dword ptr [0x00854964],ESI
LAB_006a468a:
006A468A  89 06                     MOV dword ptr [ESI],EAX
006A468C  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
006A4693  89 35 6C 49 85 00         MOV dword ptr [0x0085496c],ESI
LAB_006a4699:
006A4699  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A469C  5F                        POP EDI
006A469D  5E                        POP ESI
006A469E  5B                        POP EBX
006A469F  8B E5                     MOV ESP,EBP
006A46A1  5D                        POP EBP
006A46A2  C3                        RET
