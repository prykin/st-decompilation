FUN_006c8680:
006C8680  55                        PUSH EBP
006C8681  8B EC                     MOV EBP,ESP
006C8683  83 EC 54                  SUB ESP,0x54
006C8686  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C8689  53                        PUSH EBX
006C868A  56                        PUSH ESI
006C868B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C868E  57                        PUSH EDI
006C868F  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
006C8692  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006C8695  50                        PUSH EAX
006C8696  51                        PUSH ECX
006C8697  52                        PUSH EDX
006C8698  E8 53 CE FE FF            CALL 0x006b54f0
006C869D  85 C0                     TEST EAX,EAX
006C869F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C86A2  0F 84 02 01 00 00         JZ 0x006c87aa
006C86A8  8B 0E                     MOV ECX,dword ptr [ESI]
006C86AA  8B 10                     MOV EDX,dword ptr [EAX]
006C86AC  0B D1                     OR EDX,ECX
006C86AE  6A 00                     PUSH 0x0
006C86B0  89 10                     MOV dword ptr [EAX],EDX
006C86B2  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006C86B5  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006C86B8  83 C1 07                  ADD ECX,0x7
006C86BB  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006C86C1  8D 46 18                  LEA EAX,[ESI + 0x18]
006C86C4  C1 E9 03                  SHR ECX,0x3
006C86C7  03 C8                     ADD ECX,EAX
006C86C9  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006C86CC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C86CF  8D 4D B0                  LEA ECX,[EBP + -0x50]
006C86D2  8D 45 AC                  LEA EAX,[EBP + -0x54]
006C86D5  51                        PUSH ECX
006C86D6  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006C86D9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C86DE  E8 0D 51 06 00            CALL 0x0072d7f0
006C86E3  8B F0                     MOV ESI,EAX
006C86E5  83 C4 08                  ADD ESP,0x8
006C86E8  85 F6                     TEST ESI,ESI
006C86EA  0F 85 94 00 00 00         JNZ 0x006c8784
006C86F0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006C86F3  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006C86F6  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006C86F9  85 C0                     TEST EAX,EAX
006C86FB  7E 73                     JLE 0x006c8770
LAB_006c86fd:
006C86FD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C8700  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C8703  80 F2 07                  XOR DL,0x7
006C8706  33 C0                     XOR EAX,EAX
006C8708  0F A3 11                  BT [ECX],EDX
006C870B  D0 D0                     RCL AL,0x1
006C870D  85 C0                     TEST EAX,EAX
006C870F  74 4A                     JZ 0x006c875b
006C8711  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
006C8714  83 C9 FF                  OR ECX,0xffffffff
006C8717  33 C0                     XOR EAX,EAX
006C8719  F2 AE                     SCASB.REPNE ES:EDI
006C871B  F7 D1                     NOT ECX
006C871D  49                        DEC ECX
006C871E  8B D9                     MOV EBX,ECX
006C8720  43                        INC EBX
006C8721  53                        PUSH EBX
006C8722  E8 49 25 FE FF            CALL 0x006aac70
006C8727  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C872A  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
006C872D  89 04 B1                  MOV dword ptr [ECX + ESI*0x4],EAX
006C8730  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
006C8733  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C8736  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
006C8739  8B CB                     MOV ECX,EBX
006C873B  8B 3C 90                  MOV EDI,dword ptr [EAX + EDX*0x4]
006C873E  8B C1                     MOV EAX,ECX
006C8740  C1 E9 02                  SHR ECX,0x2
006C8743  F3 A5                     MOVSD.REP ES:EDI,ESI
006C8745  8B C8                     MOV ECX,EAX
006C8747  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C874A  83 E1 03                  AND ECX,0x3
006C874D  03 C3                     ADD EAX,EBX
006C874F  F3 A4                     MOVSB.REP ES:EDI,ESI
006C8751  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006C8754  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006C8757  8B F2                     MOV ESI,EDX
006C8759  EB 0A                     JMP 0x006c8765
LAB_006c875b:
006C875B  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
006C875E  C7 04 B1 00 00 00 00      MOV dword ptr [ECX + ESI*0x4],0x0
LAB_006c8765:
006C8765  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006C8768  46                        INC ESI
006C8769  3B F0                     CMP ESI,EAX
006C876B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006C876E  7C 8D                     JL 0x006c86fd
LAB_006c8770:
006C8770  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006C8773  8B C7                     MOV EAX,EDI
006C8775  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C877B  5F                        POP EDI
006C877C  5E                        POP ESI
006C877D  5B                        POP EBX
006C877E  8B E5                     MOV ESP,EBP
006C8780  5D                        POP EBP
006C8781  C2 08 00                  RET 0x8
LAB_006c8784:
006C8784  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006C8787  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C878A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C878F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C8792  50                        PUSH EAX
006C8793  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
006C8796  E8 D5 CD FE FF            CALL 0x006b5570
006C879B  6A 28                     PUSH 0x28
006C879D  68 94 E0 7E 00            PUSH 0x7ee094
006C87A2  6A 00                     PUSH 0x0
006C87A4  56                        PUSH ESI
006C87A5  E8 96 D6 FD FF            CALL 0x006a5e40
LAB_006c87aa:
006C87AA  5F                        POP EDI
006C87AB  5E                        POP ESI
006C87AC  33 C0                     XOR EAX,EAX
006C87AE  5B                        POP EBX
006C87AF  8B E5                     MOV ESP,EBP
006C87B1  5D                        POP EBP
006C87B2  C2 08 00                  RET 0x8
