STBHEShellC::sub_005F4680:
005F4680  55                        PUSH EBP
005F4681  8B EC                     MOV EBP,ESP
005F4683  83 EC 0C                  SUB ESP,0xc
005F4686  53                        PUSH EBX
005F4687  56                        PUSH ESI
005F4688  8B F1                     MOV ESI,ECX
005F468A  57                        PUSH EDI
005F468B  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F4691  85 C0                     TEST EAX,EAX
005F4693  7D 0C                     JGE 0x005f46a1
005F4695  8B 86 87 00 00 00         MOV EAX,dword ptr [ESI + 0x87]
005F469B  50                        PUSH EAX
005F469C  E8 19 0F E1 FF            CALL 0x004055ba
LAB_005f46a1:
005F46A1  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
005F46A7  85 FF                     TEST EDI,EDI
005F46A9  0F 84 B4 02 00 00         JZ 0x005f4963
005F46AF  8B 8E 9B 00 00 00         MOV ECX,dword ptr [ESI + 0x9b]
005F46B5  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F46BA  85 C9                     TEST ECX,ECX
005F46BC  7C 14                     JL 0x005f46d2
005F46BE  F7 E9                     IMUL ECX
005F46C0  C1 FA 06                  SAR EDX,0x6
005F46C3  8B CA                     MOV ECX,EDX
005F46C5  C1 E9 1F                  SHR ECX,0x1f
005F46C8  03 D1                     ADD EDX,ECX
005F46CA  0F BF D2                  MOVSX EDX,DX
005F46CD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005F46D0  EB 13                     JMP 0x005f46e5
LAB_005f46d2:
005F46D2  F7 E9                     IMUL ECX
005F46D4  C1 FA 06                  SAR EDX,0x6
005F46D7  8B C2                     MOV EAX,EDX
005F46D9  C1 E8 1F                  SHR EAX,0x1f
005F46DC  03 D0                     ADD EDX,EAX
005F46DE  0F BF C2                  MOVSX EAX,DX
005F46E1  48                        DEC EAX
005F46E2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_005f46e5:
005F46E5  8B 8E 97 00 00 00         MOV ECX,dword ptr [ESI + 0x97]
005F46EB  B8 79 19 8C 02            MOV EAX,0x28c1979
005F46F0  85 C9                     TEST ECX,ECX
005F46F2  7C 10                     JL 0x005f4704
005F46F4  F7 E9                     IMUL ECX
005F46F6  D1 FA                     SAR EDX,0x1
005F46F8  8B CA                     MOV ECX,EDX
005F46FA  C1 E9 1F                  SHR ECX,0x1f
005F46FD  03 D1                     ADD EDX,ECX
005F46FF  0F BF DA                  MOVSX EBX,DX
005F4702  EB 0F                     JMP 0x005f4713
LAB_005f4704:
005F4704  F7 E9                     IMUL ECX
005F4706  D1 FA                     SAR EDX,0x1
005F4708  8B C2                     MOV EAX,EDX
005F470A  C1 E8 1F                  SHR EAX,0x1f
005F470D  03 D0                     ADD EDX,EAX
005F470F  0F BF DA                  MOVSX EBX,DX
005F4712  4B                        DEC EBX
LAB_005f4713:
005F4713  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
005F4719  B8 79 19 8C 02            MOV EAX,0x28c1979
005F471E  85 C9                     TEST ECX,ECX
005F4720  7C 10                     JL 0x005f4732
005F4722  F7 E9                     IMUL ECX
005F4724  D1 FA                     SAR EDX,0x1
005F4726  8B CA                     MOV ECX,EDX
005F4728  C1 E9 1F                  SHR ECX,0x1f
005F472B  03 D1                     ADD EDX,ECX
005F472D  0F BF C2                  MOVSX EAX,DX
005F4730  EB 0F                     JMP 0x005f4741
LAB_005f4732:
005F4732  F7 E9                     IMUL ECX
005F4734  D1 FA                     SAR EDX,0x1
005F4736  8B C2                     MOV EAX,EDX
005F4738  C1 E8 1F                  SHR EAX,0x1f
005F473B  03 D0                     ADD EDX,EAX
005F473D  0F BF C2                  MOVSX EAX,DX
005F4740  48                        DEC EAX
LAB_005f4741:
005F4741  80 3D 4D 87 80 00 FF      CMP byte ptr [0x0080874d],0xff
005F4748  74 6C                     JZ 0x005f47b6
005F474A  8B 8F F8 00 00 00         MOV ECX,dword ptr [EDI + 0xf8]
005F4750  85 C9                     TEST ECX,ECX
005F4752  74 62                     JZ 0x005f47b6
005F4754  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F4757  8D 55 F8                  LEA EDX,[EBP + -0x8]
005F475A  51                        PUSH ECX
005F475B  52                        PUSH EDX
005F475C  53                        PUSH EBX
005F475D  50                        PUSH EAX
005F475E  8B 87 0C 01 00 00         MOV EAX,dword ptr [EDI + 0x10c]
005F4764  8B CF                     MOV ECX,EDI
005F4766  50                        PUSH EAX
005F4767  E8 E7 F7 E0 FF            CALL 0x00403f53
005F476C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F476F  85 C0                     TEST EAX,EAX
005F4771  7C 43                     JL 0x005f47b6
005F4773  83 F8 05                  CMP EAX,0x5
005F4776  7D 3E                     JGE 0x005f47b6
005F4778  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F477B  85 D2                     TEST EDX,EDX
005F477D  7C 37                     JL 0x005f47b6
005F477F  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
005F4782  3B D1                     CMP EDX,ECX
005F4784  7D 30                     JGE 0x005f47b6
005F4786  8B 04 85 D0 AE 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x79aed0]
005F478D  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005F4790  03 C3                     ADD EAX,EBX
005F4792  85 C0                     TEST EAX,EAX
005F4794  7C 20                     JL 0x005f47b6
005F4796  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
005F4799  7D 1B                     JGE 0x005f47b6
005F479B  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
005F479E  85 FF                     TEST EDI,EDI
005F47A0  74 14                     JZ 0x005f47b6
005F47A2  0F AF C1                  IMUL EAX,ECX
005F47A5  03 C7                     ADD EAX,EDI
005F47A7  33 C9                     XOR ECX,ECX
005F47A9  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
005F47AC  8B C1                     MOV EAX,ECX
005F47AE  85 C0                     TEST EAX,EAX
005F47B0  0F 84 8A 01 00 00         JZ 0x005f4940
LAB_005f47b6:
005F47B6  8B 96 AB 00 00 00         MOV EDX,dword ptr [ESI + 0xab]
005F47BC  8B 8E AF 00 00 00         MOV ECX,dword ptr [ESI + 0xaf]
005F47C2  42                        INC EDX
005F47C3  8B C2                     MOV EAX,EDX
005F47C5  89 96 AB 00 00 00         MOV dword ptr [ESI + 0xab],EDX
005F47CB  3B C1                     CMP EAX,ECX
005F47CD  7C 0A                     JL 0x005f47d9
005F47CF  C7 86 AB 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xab],0x0
LAB_005f47d9:
005F47D9  DB 86 9B 00 00 00         FILD dword ptr [ESI + 0x9b]
005F47DF  51                        PUSH ECX
005F47E0  8B 96 8F 00 00 00         MOV EDX,dword ptr [ESI + 0x8f]
005F47E6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F47EC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F47F2  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
005F47F8  D9 1C 24                  FSTP float ptr [ESP]
005F47FB  DB 86 97 00 00 00         FILD dword ptr [ESI + 0x97]
005F4801  51                        PUSH ECX
005F4802  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F4808  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F480E  D9 1C 24                  FSTP float ptr [ESP]
005F4811  DB 86 93 00 00 00         FILD dword ptr [ESI + 0x93]
005F4817  51                        PUSH ECX
005F4818  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F481E  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
005F4824  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
005F482A  D9 1C 24                  FSTP float ptr [ESP]
005F482D  52                        PUSH EDX
005F482E  E8 2D 61 0F 00            CALL 0x006ea960
005F4833  8B 86 AB 00 00 00         MOV EAX,dword ptr [ESI + 0xab]
005F4839  8B 8E 8F 00 00 00         MOV ECX,dword ptr [ESI + 0x8f]
005F483F  50                        PUSH EAX
005F4840  6A 00                     PUSH 0x0
005F4842  51                        PUSH ECX
005F4843  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4849  E8 22 5A 0F 00            CALL 0x006ea270
005F484E  8B 96 9B 00 00 00         MOV EDX,dword ptr [ESI + 0x9b]
005F4854  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
005F485A  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
005F4860  52                        PUSH EDX
005F4861  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
005F4867  50                        PUSH EAX
005F4868  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
005F486E  51                        PUSH ECX
005F486F  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
005F4875  52                        PUSH EDX
005F4876  50                        PUSH EAX
005F4877  51                        PUSH ECX
005F4878  E8 90 86 0B 00            CALL 0x006acf0d
005F487D  8B C8                     MOV ECX,EAX
005F487F  83 C4 18                  ADD ESP,0x18
005F4882  85 C9                     TEST ECX,ECX
005F4884  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F4887  74 53                     JZ 0x005f48dc
005F4889  8B BE 93 00 00 00         MOV EDI,dword ptr [ESI + 0x93]
005F488F  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
005F4895  2B C7                     SUB EAX,EDI
005F4897  8B 9E 97 00 00 00         MOV EBX,dword ptr [ESI + 0x97]
005F489D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F48A0  C1 E0 03                  SHL EAX,0x3
005F48A3  99                        CDQ
005F48A4  F7 F9                     IDIV ECX
005F48A6  8B C8                     MOV ECX,EAX
005F48A8  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
005F48AE  2B C3                     SUB EAX,EBX
005F48B0  03 CF                     ADD ECX,EDI
005F48B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F48B5  C1 E0 03                  SHL EAX,0x3
005F48B8  99                        CDQ
005F48B9  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
005F48BC  8B F8                     MOV EDI,EAX
005F48BE  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
005F48C4  03 FB                     ADD EDI,EBX
005F48C6  8B 9E 9B 00 00 00         MOV EBX,dword ptr [ESI + 0x9b]
005F48CC  2B C3                     SUB EAX,EBX
005F48CE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F48D1  C1 E0 03                  SHL EAX,0x3
005F48D4  99                        CDQ
005F48D5  F7 7D FC                  IDIV dword ptr [EBP + -0x4]
005F48D8  03 C3                     ADD EAX,EBX
005F48DA  EB 12                     JMP 0x005f48ee
LAB_005f48dc:
005F48DC  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
005F48E2  8B BE 97 00 00 00         MOV EDI,dword ptr [ESI + 0x97]
005F48E8  8B 86 9B 00 00 00         MOV EAX,dword ptr [ESI + 0x9b]
LAB_005f48ee:
005F48EE  6A 00                     PUSH 0x0
005F48F0  6A 00                     PUSH 0x0
005F48F2  6A FF                     PUSH -0x1
005F48F4  6A 00                     PUSH 0x0
005F48F6  6A 00                     PUSH 0x0
005F48F8  6A 00                     PUSH 0x0
005F48FA  6A 00                     PUSH 0x0
005F48FC  6A 00                     PUSH 0x0
005F48FE  6A 00                     PUSH 0x0
005F4900  50                        PUSH EAX
005F4901  57                        PUSH EDI
005F4902  51                        PUSH ECX
005F4903  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
005F4909  6A 00                     PUSH 0x0
005F490B  6A 01                     PUSH 0x1
005F490D  6A 01                     PUSH 0x1
005F490F  E8 1F CB E0 FF            CALL 0x00401433
005F4914  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
005F491A  84 C0                     TEST AL,AL
005F491C  75 45                     JNZ 0x005f4963
005F491E  8B 96 8F 00 00 00         MOV EDX,dword ptr [ESI + 0x8f]
005F4924  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F492A  6A 00                     PUSH 0x0
005F492C  52                        PUSH EDX
005F492D  E8 6E 61 0F 00            CALL 0x006eaaa0
005F4932  C6 86 C4 00 00 00 01      MOV byte ptr [ESI + 0xc4],0x1
005F4939  5F                        POP EDI
005F493A  5E                        POP ESI
005F493B  5B                        POP EBX
005F493C  8B E5                     MOV ESP,EBP
005F493E  5D                        POP EBP
005F493F  C3                        RET
LAB_005f4940:
005F4940  8A 86 C4 00 00 00         MOV AL,byte ptr [ESI + 0xc4]
005F4946  84 C0                     TEST AL,AL
005F4948  74 19                     JZ 0x005f4963
005F494A  8B 86 8F 00 00 00         MOV EAX,dword ptr [ESI + 0x8f]
005F4950  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F4956  50                        PUSH EAX
005F4957  E8 04 62 0F 00            CALL 0x006eab60
005F495C  C6 86 C4 00 00 00 00      MOV byte ptr [ESI + 0xc4],0x0
LAB_005f4963:
005F4963  5F                        POP EDI
005F4964  5E                        POP ESI
005F4965  5B                        POP EBX
005F4966  8B E5                     MOV ESP,EBP
005F4968  5D                        POP EBP
005F4969  C3                        RET
