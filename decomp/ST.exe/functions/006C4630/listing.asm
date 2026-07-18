FUN_006c4630:
006C4630  55                        PUSH EBP
006C4631  8B EC                     MOV EBP,ESP
006C4633  81 EC 9C 04 00 00         SUB ESP,0x49c
006C4639  56                        PUSH ESI
006C463A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C463D  57                        PUSH EDI
006C463E  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C4645  74 0D                     JZ 0x006c4654
006C4647  8D 86 F0 04 00 00         LEA EAX,[ESI + 0x4f0]
006C464D  50                        PUSH EAX
006C464E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c4654:
006C4654  53                        PUSH EBX
006C4655  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006C4658  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
006C465E  C7 85 64 FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff64],0x7c
006C4668  8B 0B                     MOV ECX,dword ptr [EBX]
006C466A  52                        PUSH EDX
006C466B  53                        PUSH EBX
006C466C  C7 85 68 FF FF FF 06 10 00 00  MOV dword ptr [EBP + 0xffffff68],0x1006
006C4676  C7 45 AC 20 00 00 00      MOV dword ptr [EBP + -0x54],0x20
006C467D  FF 51 58                  CALL dword ptr [ECX + 0x58]
006C4680  8B F8                     MOV EDI,EAX
006C4682  85 FF                     TEST EDI,EDI
006C4684  0F 85 AA 01 00 00         JNZ 0x006c4834
006C468A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C468D  85 C0                     TEST EAX,EAX
006C468F  74 1A                     JZ 0x006c46ab
006C4691  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006C4694  89 08                     MOV dword ptr [EAX],ECX
006C4696  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006C4699  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006C469C  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006C469F  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006C46A2  8B 96 C0 04 00 00         MOV EDX,dword ptr [ESI + 0x4c0]
006C46A8  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_006c46ab:
006C46AB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006C46AE  BA 10 00 00 00            MOV EDX,0x10
006C46B3  3B C2                     CMP EAX,EDX
006C46B5  0F 85 4C 01 00 00         JNZ 0x006c4807
006C46BB  B9 00 01 00 00            MOV ECX,0x100
006C46C0  33 C0                     XOR EAX,EAX
006C46C2  8D BD 64 FB FF FF         LEA EDI,[EBP + 0xfffffb64]
006C46C8  F3 AB                     STOSD.REP ES:EDI
006C46CA  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
006C46CD  8B 8E C4 04 00 00         MOV ECX,dword ptr [ESI + 0x4c4]
006C46D3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C46D6  8B 86 C8 04 00 00         MOV EAX,dword ptr [ESI + 0x4c8]
006C46DC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006C46DF  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
006C46E5  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C46E8  8B 8E CC 04 00 00         MOV ECX,dword ptr [ESI + 0x4cc]
006C46EE  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006C46F1  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
006C46F7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C46FA  8B 8E D4 04 00 00         MOV ECX,dword ptr [ESI + 0x4d4]
006C4700  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006C4703  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006C4706  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006C4709  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006C470C  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006C470F  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C4712  33 FF                     XOR EDI,EDI
006C4714  89 86 C4 04 00 00         MOV dword ptr [ESI + 0x4c4],EAX
006C471A  F6 C4 80                  TEST AH,0x80
006C471D  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C4720  89 8E C8 04 00 00         MOV dword ptr [ESI + 0x4c8],ECX
006C4726  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006C4729  89 96 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EDX
006C472F  75 08                     JNZ 0x006c4739
LAB_006c4731:
006C4731  D1 E0                     SHL EAX,0x1
006C4733  47                        INC EDI
006C4734  F6 C4 80                  TEST AH,0x80
006C4737  74 F8                     JZ 0x006c4731
LAB_006c4739:
006C4739  33 DB                     XOR EBX,EBX
006C473B  F6 C5 80                  TEST CH,0x80
006C473E  75 0B                     JNZ 0x006c474b
006C4740  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_006c4743:
006C4743  D1 E0                     SHL EAX,0x1
006C4745  43                        INC EBX
006C4746  F6 C4 80                  TEST AH,0x80
006C4749  74 F8                     JZ 0x006c4743
LAB_006c474b:
006C474B  33 C0                     XOR EAX,EAX
006C474D  F6 C6 80                  TEST DH,0x80
006C4750  75 0B                     JNZ 0x006c475d
006C4752  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_006c4755:
006C4755  D1 E1                     SHL ECX,0x1
006C4757  40                        INC EAX
006C4758  F6 C5 80                  TEST CH,0x80
006C475B  74 F8                     JZ 0x006c4755
LAB_006c475d:
006C475D  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
006C4763  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006C4766  85 C0                     TEST EAX,EAX
006C4768  89 BE D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EDI
006C476E  89 9E D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EBX
006C4774  74 20                     JZ 0x006c4796
006C4776  8B 08                     MOV ECX,dword ptr [EAX]
006C4778  8D 95 64 FB FF FF         LEA EDX,[EBP + 0xfffffb64]
006C477E  52                        PUSH EDX
006C477F  68 00 01 00 00            PUSH 0x100
006C4784  6A 00                     PUSH 0x0
006C4786  6A 00                     PUSH 0x0
006C4788  50                        PUSH EAX
006C4789  FF 51 10                  CALL dword ptr [ECX + 0x10]
006C478C  8B F8                     MOV EDI,EAX
006C478E  85 FF                     TEST EDI,EDI
006C4790  0F 85 9E 00 00 00         JNZ 0x006c4834
LAB_006c4796:
006C4796  68 00 01 00 00            PUSH 0x100
006C479B  8D 85 64 FB FF FF         LEA EAX,[EBP + 0xfffffb64]
006C47A1  6A 00                     PUSH 0x0
006C47A3  50                        PUSH EAX
006C47A4  56                        PUSH ESI
006C47A5  C7 86 C0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4c0],0x0
006C47AF  E8 6C BD FE FF            CALL 0x006b0520
006C47B4  8B F8                     MOV EDI,EAX
006C47B6  85 FF                     TEST EDI,EDI
006C47B8  74 4A                     JZ 0x006c4804
006C47BA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C47BD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C47C0  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006C47C3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C47C6  89 96 C0 04 00 00         MOV dword ptr [ESI + 0x4c0],EDX
006C47CC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006C47CF  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006C47D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C47D5  89 8E C4 04 00 00         MOV dword ptr [ESI + 0x4c4],ECX
006C47DB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C47DE  89 96 C8 04 00 00         MOV dword ptr [ESI + 0x4c8],EDX
006C47E4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C47E7  89 86 CC 04 00 00         MOV dword ptr [ESI + 0x4cc],EAX
006C47ED  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006C47F0  89 8E D0 04 00 00         MOV dword ptr [ESI + 0x4d0],ECX
006C47F6  89 96 D4 04 00 00         MOV dword ptr [ESI + 0x4d4],EDX
006C47FC  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
006C4802  EB 30                     JMP 0x006c4834
LAB_006c4804:
006C4804  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_006c4807:
006C4807  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
006C480D  33 C0                     XOR EAX,EAX
006C480F  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006C4812  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
006C4815  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006C481B  89 4E 18                  MOV dword ptr [ESI + 0x18],ECX
006C481E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
006C4821  89 4E 50                  MOV dword ptr [ESI + 0x50],ECX
006C4824  66 8B 4E 20               MOV CX,word ptr [ESI + 0x20]
006C4828  89 5E 40                  MOV dword ptr [ESI + 0x40],EBX
006C482B  F7 D8                     NEG EAX
006C482D  89 46 54                  MOV dword ptr [ESI + 0x54],EAX
006C4830  66 89 4E 5A               MOV word ptr [ESI + 0x5a],CX
LAB_006c4834:
006C4834  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C4837  5B                        POP EBX
006C4838  A9 00 00 00 04            TEST EAX,0x4000000
006C483D  74 0D                     JZ 0x006c484c
006C483F  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C4845  56                        PUSH ESI
006C4846  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c484c:
006C484C  85 FF                     TEST EDI,EDI
006C484E  74 21                     JZ 0x006c4871
006C4850  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C4856  68 AE 00 00 00            PUSH 0xae
006C485B  68 F4 DE 7E 00            PUSH 0x7edef4
006C4860  52                        PUSH EDX
006C4861  57                        PUSH EDI
006C4862  E8 D9 15 FE FF            CALL 0x006a5e40
006C4867  8B C7                     MOV EAX,EDI
006C4869  5F                        POP EDI
006C486A  5E                        POP ESI
006C486B  8B E5                     MOV ESP,EBP
006C486D  5D                        POP EBP
006C486E  C2 0C 00                  RET 0xc
LAB_006c4871:
006C4871  5F                        POP EDI
006C4872  33 C0                     XOR EAX,EAX
006C4874  5E                        POP ESI
006C4875  8B E5                     MOV ESP,EBP
006C4877  5D                        POP EBP
006C4878  C2 0C 00                  RET 0xc
