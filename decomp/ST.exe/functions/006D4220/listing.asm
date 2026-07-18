FUN_006d4220:
006D4220  55                        PUSH EBP
006D4221  8B EC                     MOV EBP,ESP
006D4223  83 EC 08                  SUB ESP,0x8
006D4226  53                        PUSH EBX
006D4227  56                        PUSH ESI
006D4228  57                        PUSH EDI
006D4229  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D422C  85 FF                     TEST EDI,EDI
006D422E  C7 45 FC FE FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffe
006D4235  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006D423C  75 1F                     JNZ 0x006d425d
006D423E  6A 4C                     PUSH 0x4c
006D4240  E8 CB 69 FD FF            CALL 0x006aac10
006D4245  8B D8                     MOV EBX,EAX
006D4247  85 DB                     TEST EBX,EBX
006D4249  75 09                     JNZ 0x006d4254
006D424B  5F                        POP EDI
006D424C  5E                        POP ESI
006D424D  5B                        POP EBX
006D424E  8B E5                     MOV ESP,EBP
006D4250  5D                        POP EBP
006D4251  C2 14 00                  RET 0x14
LAB_006d4254:
006D4254  C7 43 08 00 00 40 00      MOV dword ptr [EBX + 0x8],0x400000
006D425B  EB 0B                     JMP 0x006d4268
LAB_006d425d:
006D425D  B9 13 00 00 00            MOV ECX,0x13
006D4262  33 C0                     XOR EAX,EAX
006D4264  8B DF                     MOV EBX,EDI
006D4266  F3 AB                     STOSD.REP ES:EDI
LAB_006d4268:
006D4268  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D426B  83 C9 FF                  OR ECX,0xffffffff
006D426E  8B FE                     MOV EDI,ESI
006D4270  33 C0                     XOR EAX,EAX
006D4272  F2 AE                     SCASB.REPNE ES:EDI
006D4274  F7 D1                     NOT ECX
006D4276  51                        PUSH ECX
006D4277  E8 F4 B8 FE FF            CALL 0x006bfb70
006D427C  85 C0                     TEST EAX,EAX
006D427E  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006D4281  0F 84 B4 00 00 00         JZ 0x006d433b
006D4287  8B FE                     MOV EDI,ESI
006D4289  83 C9 FF                  OR ECX,0xffffffff
006D428C  33 C0                     XOR EAX,EAX
006D428E  6A 00                     PUSH 0x0
006D4290  F2 AE                     SCASB.REPNE ES:EDI
006D4292  F7 D1                     NOT ECX
006D4294  2B F9                     SUB EDI,ECX
006D4296  68 80 00 00 00            PUSH 0x80
006D429B  8B C1                     MOV EAX,ECX
006D429D  8B F7                     MOV ESI,EDI
006D429F  8B 7B 04                  MOV EDI,dword ptr [EBX + 0x4]
006D42A2  6A 02                     PUSH 0x2
006D42A4  C1 E9 02                  SHR ECX,0x2
006D42A7  F3 A5                     MOVSD.REP ES:EDI,ESI
006D42A9  8B C8                     MOV ECX,EAX
006D42AB  6A 00                     PUSH 0x0
006D42AD  83 E1 03                  AND ECX,0x3
006D42B0  6A 00                     PUSH 0x0
006D42B2  F3 A4                     MOVSB.REP ES:EDI,ESI
006D42B4  8B 7B 08                  MOV EDI,dword ptr [EBX + 0x8]
006D42B7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D42BA  81 CF 00 00 80 00         OR EDI,0x800000
006D42C0  68 00 00 00 C0            PUSH 0xc0000000
006D42C5  51                        PUSH ECX
006D42C6  89 7B 08                  MOV dword ptr [EBX + 0x8],EDI
006D42C9  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006D42CF  83 F8 FF                  CMP EAX,-0x1
006D42D2  89 43 0C                  MOV dword ptr [EBX + 0xc],EAX
006D42D5  74 51                     JZ 0x006d4328
006D42D7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006D42DA  6A 00                     PUSH 0x0
006D42DC  57                        PUSH EDI
006D42DD  6A 00                     PUSH 0x0
006D42DF  6A 04                     PUSH 0x4
006D42E1  8B D0                     MOV EDX,EAX
006D42E3  6A 00                     PUSH 0x0
006D42E5  52                        PUSH EDX
006D42E6  FF 15 58 BB 85 00         CALL dword ptr [0x0085bb58]
006D42EC  8B F0                     MOV ESI,EAX
006D42EE  85 F6                     TEST ESI,ESI
006D42F0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006D42F3  74 33                     JZ 0x006d4328
006D42F5  57                        PUSH EDI
006D42F6  6A 00                     PUSH 0x0
006D42F8  6A 00                     PUSH 0x0
006D42FA  68 1F 00 0F 00            PUSH 0xf001f
006D42FF  56                        PUSH ESI
006D4300  FF 15 5C BB 85 00         CALL dword ptr [0x0085bb5c]
006D4306  85 C0                     TEST EAX,EAX
006D4308  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
006D430B  74 1B                     JZ 0x006d4328
006D430D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D4310  56                        PUSH ESI
006D4311  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
006D4314  89 7B 38                  MOV dword ptr [EBX + 0x38],EDI
006D4317  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
006D431D  5F                        POP EDI
006D431E  8B C3                     MOV EAX,EBX
006D4320  5E                        POP ESI
006D4321  5B                        POP EBX
006D4322  8B E5                     MOV ESP,EBP
006D4324  5D                        POP EBP
006D4325  C2 14 00                  RET 0x14
LAB_006d4328:
006D4328  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006D432E  8B F0                     MOV ESI,EAX
006D4330  85 F6                     TEST ESI,ESI
006D4332  75 0A                     JNZ 0x006d433e
006D4334  C7 45 FC 03 FF FF FF      MOV dword ptr [EBP + -0x4],0xffffff03
LAB_006d433b:
006D433B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_006d433e:
006D433E  6A 00                     PUSH 0x0
006D4340  53                        PUSH EBX
006D4341  E8 5A 03 00 00            CALL 0x006d46a0
006D4346  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006D4349  85 C0                     TEST EAX,EAX
006D434B  74 07                     JZ 0x006d4354
006D434D  50                        PUSH EAX
006D434E  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006d4354:
006D4354  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006D435A  6A 4B                     PUSH 0x4b
006D435C  68 2C E2 7E 00            PUSH 0x7ee22c
006D4361  51                        PUSH ECX
006D4362  56                        PUSH ESI
006D4363  E8 D8 1A FD FF            CALL 0x006a5e40
006D4368  5F                        POP EDI
006D4369  5E                        POP ESI
006D436A  33 C0                     XOR EAX,EAX
006D436C  5B                        POP EBX
006D436D  8B E5                     MOV ESP,EBP
006D436F  5D                        POP EBP
006D4370  C2 14 00                  RET 0x14
