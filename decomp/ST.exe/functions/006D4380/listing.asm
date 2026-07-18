FUN_006d4380:
006D4380  55                        PUSH EBP
006D4381  8B EC                     MOV EBP,ESP
006D4383  51                        PUSH ECX
006D4384  53                        PUSH EBX
006D4385  56                        PUSH ESI
006D4386  57                        PUSH EDI
006D4387  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D438A  85 FF                     TEST EDI,EDI
006D438C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006D4393  75 1F                     JNZ 0x006d43b4
006D4395  6A 4C                     PUSH 0x4c
006D4397  E8 74 68 FD FF            CALL 0x006aac10
006D439C  8B D8                     MOV EBX,EAX
006D439E  85 DB                     TEST EBX,EBX
006D43A0  75 09                     JNZ 0x006d43ab
006D43A2  5F                        POP EDI
006D43A3  5E                        POP ESI
006D43A4  5B                        POP EBX
006D43A5  8B E5                     MOV ESP,EBP
006D43A7  5D                        POP EBP
006D43A8  C2 0C 00                  RET 0xc
LAB_006d43ab:
006D43AB  C7 43 08 00 00 40 00      MOV dword ptr [EBX + 0x8],0x400000
006D43B2  EB 0B                     JMP 0x006d43bf
LAB_006d43b4:
006D43B4  B9 13 00 00 00            MOV ECX,0x13
006D43B9  33 C0                     XOR EAX,EAX
006D43BB  8B DF                     MOV EBX,EDI
006D43BD  F3 AB                     STOSD.REP ES:EDI
LAB_006d43bf:
006D43BF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D43C2  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
006D43C5  25 00 00 10 00            AND EAX,0x100000
006D43CA  83 C9 FF                  OR ECX,0xffffffff
006D43CD  0B F0                     OR ESI,EAX
006D43CF  33 C0                     XOR EAX,EAX
006D43D1  89 73 08                  MOV dword ptr [EBX + 0x8],ESI
006D43D4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D43D7  8B FE                     MOV EDI,ESI
006D43D9  F2 AE                     SCASB.REPNE ES:EDI
006D43DB  F7 D1                     NOT ECX
006D43DD  51                        PUSH ECX
006D43DE  E8 8D B7 FE FF            CALL 0x006bfb70
006D43E3  85 C0                     TEST EAX,EAX
006D43E5  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006D43E8  75 0A                     JNZ 0x006d43f4
006D43EA  BE FE FF FF FF            MOV ESI,0xfffffffe
006D43EF  E9 C3 00 00 00            JMP 0x006d44b7
LAB_006d43f4:
006D43F4  8B FE                     MOV EDI,ESI
006D43F6  83 C9 FF                  OR ECX,0xffffffff
006D43F9  33 C0                     XOR EAX,EAX
006D43FB  F2 AE                     SCASB.REPNE ES:EDI
006D43FD  F7 D1                     NOT ECX
006D43FF  2B F9                     SUB EDI,ECX
006D4401  50                        PUSH EAX
006D4402  8B D1                     MOV EDX,ECX
006D4404  8B F7                     MOV ESI,EDI
006D4406  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
006D4409  68 80 00 00 00            PUSH 0x80
006D440E  C1 E9 02                  SHR ECX,0x2
006D4411  F3 A5                     MOVSD.REP ES:EDI,ESI
006D4413  8B CA                     MOV ECX,EDX
006D4415  6A 03                     PUSH 0x3
006D4417  50                        PUSH EAX
006D4418  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D441B  83 E1 03                  AND ECX,0x3
006D441E  6A 01                     PUSH 0x1
006D4420  68 00 00 00 80            PUSH 0x80000000
006D4425  50                        PUSH EAX
006D4426  F3 A4                     MOVSB.REP ES:EDI,ESI
006D4428  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006D442E  83 F8 FF                  CMP EAX,-0x1
006D4431  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006D4434  74 70                     JZ 0x006d44a6
006D4436  8B 3D 74 BC 85 00         MOV EDI,dword ptr [0x0085bc74]
006D443C  6A 02                     PUSH 0x2
006D443E  6A 00                     PUSH 0x0
006D4440  8B C8                     MOV ECX,EAX
006D4442  6A 00                     PUSH 0x0
006D4444  51                        PUSH ECX
006D4445  FF D7                     CALL EDI
006D4447  8B F0                     MOV ESI,EAX
006D4449  83 FE FF                  CMP ESI,-0x1
006D444C  74 58                     JZ 0x006d44a6
006D444E  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
006D4451  6A 00                     PUSH 0x0
006D4453  6A 00                     PUSH 0x0
006D4455  6A 00                     PUSH 0x0
006D4457  52                        PUSH EDX
006D4458  FF D7                     CALL EDI
006D445A  83 F8 FF                  CMP EAX,-0x1
006D445D  74 47                     JZ 0x006d44a6
006D445F  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006D4462  89 73 38                  MOV dword ptr [EBX + 0x38],ESI
006D4465  A9 00 00 10 00            TEST EAX,0x100000
006D446A  89 73 18                  MOV dword ptr [EBX + 0x18],ESI
006D446D  0F 85 83 00 00 00         JNZ 0x006d44f6
006D4473  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006D4476  6A 00                     PUSH 0x0
006D4478  6A 00                     PUSH 0x0
006D447A  6A 00                     PUSH 0x0
006D447C  6A 02                     PUSH 0x2
006D447E  6A 00                     PUSH 0x0
006D4480  50                        PUSH EAX
006D4481  FF 15 58 BB 85 00         CALL dword ptr [0x0085bb58]
006D4487  8B F0                     MOV ESI,EAX
006D4489  85 F6                     TEST ESI,ESI
006D448B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006D448E  74 16                     JZ 0x006d44a6
006D4490  6A 00                     PUSH 0x0
006D4492  6A 00                     PUSH 0x0
006D4494  6A 00                     PUSH 0x0
006D4496  6A 04                     PUSH 0x4
006D4498  56                        PUSH ESI
006D4499  FF 15 5C BB 85 00         CALL dword ptr [0x0085bb5c]
006D449F  85 C0                     TEST EAX,EAX
006D44A1  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
006D44A4  75 49                     JNZ 0x006d44ef
LAB_006d44a6:
006D44A6  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D44AC  8B F0                     MOV ESI,EAX
006D44AE  85 F6                     TEST ESI,ESI
006D44B0  75 05                     JNZ 0x006d44b7
006D44B2  BE 03 FF FF FF            MOV ESI,0xffffff03
LAB_006d44b7:
006D44B7  6A 00                     PUSH 0x0
006D44B9  53                        PUSH EBX
006D44BA  E8 E1 01 00 00            CALL 0x006d46a0
006D44BF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006D44C2  85 C0                     TEST EAX,EAX
006D44C4  74 07                     JZ 0x006d44cd
006D44C6  50                        PUSH EAX
006D44C7  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d44cd:
006D44CD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D44D3  68 91 00 00 00            PUSH 0x91
006D44D8  68 2C E2 7E 00            PUSH 0x7ee22c
006D44DD  51                        PUSH ECX
006D44DE  56                        PUSH ESI
006D44DF  E8 5C 19 FD FF            CALL 0x006a5e40
006D44E4  5F                        POP EDI
006D44E5  5E                        POP ESI
006D44E6  33 C0                     XOR EAX,EAX
006D44E8  5B                        POP EBX
006D44E9  8B E5                     MOV ESP,EBP
006D44EB  5D                        POP EBP
006D44EC  C2 0C 00                  RET 0xc
LAB_006d44ef:
006D44EF  56                        PUSH ESI
006D44F0  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d44f6:
006D44F6  5F                        POP EDI
006D44F7  8B C3                     MOV EAX,EBX
006D44F9  5E                        POP ESI
006D44FA  5B                        POP EBX
006D44FB  8B E5                     MOV ESP,EBP
006D44FD  5D                        POP EBP
006D44FE  C2 0C 00                  RET 0xc
