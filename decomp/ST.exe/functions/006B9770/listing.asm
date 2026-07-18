FUN_006b9770:
006B9770  55                        PUSH EBP
006B9771  8B EC                     MOV EBP,ESP
006B9773  83 EC 08                  SUB ESP,0x8
006B9776  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B9779  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B977C  57                        PUSH EDI
006B977D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006B9784  85 C9                     TEST ECX,ECX
006B9786  8B F8                     MOV EDI,EAX
006B9788  74 04                     JZ 0x006b978e
006B978A  8B 39                     MOV EDI,dword ptr [ECX]
006B978C  03 F8                     ADD EDI,EAX
LAB_006b978e:
006B978E  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
006B9795  7E 11                     JLE 0x006b97a8
006B9797  33 C0                     XOR EAX,EAX
006B9799  6A 08                     PUSH 0x8
006B979B  8A 07                     MOV AL,byte ptr [EDI]
006B979D  50                        PUSH EAX
006B979E  E8 6D 6E 07 00            CALL 0x00730610
006B97A3  83 C4 08                  ADD ESP,0x8
006B97A6  EB 10                     JMP 0x006b97b8
LAB_006b97a8:
006B97A8  8B 15 80 12 7F 00         MOV EDX,dword ptr [0x007f1280]
006B97AE  33 C9                     XOR ECX,ECX
006B97B0  8A 0F                     MOV CL,byte ptr [EDI]
006B97B2  8A 04 4A                  MOV AL,byte ptr [EDX + ECX*0x2]
006B97B5  83 E0 08                  AND EAX,0x8
LAB_006b97b8:
006B97B8  85 C0                     TEST EAX,EAX
006B97BA  74 03                     JZ 0x006b97bf
006B97BC  47                        INC EDI
006B97BD  EB CF                     JMP 0x006b978e
LAB_006b97bf:
006B97BF  53                        PUSH EBX
006B97C0  83 CB FF                  OR EBX,0xffffffff
006B97C3  33 C9                     XOR ECX,ECX
006B97C5  56                        PUSH ESI
006B97C6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006b97c9:
006B97C9  83 3D 8C 14 7F 00 01      CMP dword ptr [0x007f148c],0x1
006B97D0  7E 19                     JLE 0x006b97eb
006B97D2  33 C0                     XOR EAX,EAX
006B97D4  68 80 00 00 00            PUSH 0x80
006B97D9  8A 07                     MOV AL,byte ptr [EDI]
006B97DB  8B F0                     MOV ESI,EAX
006B97DD  56                        PUSH ESI
006B97DE  E8 2D 6E 07 00            CALL 0x00730610
006B97E3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006B97E6  83 C4 08                  ADD ESP,0x8
006B97E9  EB 13                     JMP 0x006b97fe
LAB_006b97eb:
006B97EB  A1 80 12 7F 00            MOV EAX,[0x007f1280]
006B97F0  33 D2                     XOR EDX,EDX
006B97F2  8A 17                     MOV DL,byte ptr [EDI]
006B97F4  8B F2                     MOV ESI,EDX
006B97F6  8A 04 70                  MOV AL,byte ptr [EAX + ESI*0x2]
006B97F9  25 80 00 00 00            AND EAX,0x80
LAB_006b97fe:
006B97FE  85 C0                     TEST EAX,EAX
006B9800  74 34                     JZ 0x006b9836
006B9802  83 FE 39                  CMP ESI,0x39
006B9805  7F 05                     JG 0x006b980c
006B9807  83 C6 D0                  ADD ESI,-0x30
006B980A  EB 09                     JMP 0x006b9815
LAB_006b980c:
006B980C  81 E6 DF 00 00 00         AND ESI,0xdf
006B9812  83 EE 37                  SUB ESI,0x37
LAB_006b9815:
006B9815  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B9818  3B F0                     CMP ESI,EAX
006B981A  7D 1A                     JGE 0x006b9836
006B981C  8B D9                     MOV EBX,ECX
006B981E  0F AF D8                  IMUL EBX,EAX
006B9821  03 DE                     ADD EBX,ESI
006B9823  3B D9                     CMP EBX,ECX
006B9825  73 07                     JNC 0x006b982e
006B9827  C7 45 F8 C4 FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffc4
LAB_006b982e:
006B982E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006B9831  47                        INC EDI
006B9832  8B CB                     MOV ECX,EBX
006B9834  EB 93                     JMP 0x006b97c9
LAB_006b9836:
006B9836  5E                        POP ESI
006B9837  3B CB                     CMP ECX,EBX
006B9839  5B                        POP EBX
006B983A  74 09                     JZ 0x006b9845
006B983C  C7 45 F8 FC FF FF FF      MOV dword ptr [EBP + -0x8],0xfffffffc
006B9843  EB 21                     JMP 0x006b9866
LAB_006b9845:
006B9845  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B9848  85 C0                     TEST EAX,EAX
006B984A  74 05                     JZ 0x006b9851
006B984C  2B 7D 08                  SUB EDI,dword ptr [EBP + 0x8]
006B984F  89 38                     MOV dword ptr [EAX],EDI
LAB_006b9851:
006B9851  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B9854  83 F8 C4                  CMP EAX,-0x3c
006B9857  75 09                     JNZ 0x006b9862
006B9859  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B9860  EB 04                     JMP 0x006b9866
LAB_006b9862:
006B9862  85 C0                     TEST EAX,EAX
006B9864  74 21                     JZ 0x006b9887
LAB_006b9866:
006B9866  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006B986C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B986F  6A 34                     PUSH 0x34
006B9871  68 30 DC 7E 00            PUSH 0x7edc30
006B9876  51                        PUSH ECX
006B9877  52                        PUSH EDX
006B9878  E8 C3 C5 FE FF            CALL 0x006a5e40
006B987D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B9880  5F                        POP EDI
006B9881  8B E5                     MOV ESP,EBP
006B9883  5D                        POP EBP
006B9884  C2 0C 00                  RET 0xc
LAB_006b9887:
006B9887  8B C1                     MOV EAX,ECX
006B9889  5F                        POP EDI
006B988A  8B E5                     MOV ESP,EBP
006B988C  5D                        POP EBP
006B988D  C2 0C 00                  RET 0xc
