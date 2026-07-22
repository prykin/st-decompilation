STManBasisC::sub_005F2330:
005F2330  55                        PUSH EBP
005F2331  8B EC                     MOV EBP,ESP
005F2333  51                        PUSH ECX
005F2334  53                        PUSH EBX
005F2335  8B D9                     MOV EBX,ECX
005F2337  57                        PUSH EDI
005F2338  33 FF                     XOR EDI,EDI
005F233A  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
005F233D  3B C7                     CMP EAX,EDI
005F233F  74 09                     JZ 0x005f234a
005F2341  50                        PUSH EAX
005F2342  E8 C9 BD 0B 00            CALL 0x006ae110
005F2347  89 7B 38                  MOV dword ptr [EBX + 0x38],EDI
LAB_005f234a:
005F234A  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005F234D  3B C7                     CMP EAX,EDI
005F234F  74 55                     JZ 0x005f23a6
005F2351  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005F2354  3B CF                     CMP ECX,EDI
005F2356  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005F2359  7E 3B                     JLE 0x005f2396
005F235B  56                        PUSH ESI
LAB_005f235c:
005F235C  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005F235F  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
005F2362  73 0D                     JNC 0x005f2371
005F2364  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005F2367  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005F236A  0F AF F7                  IMUL ESI,EDI
005F236D  03 F2                     ADD ESI,EDX
005F236F  EB 02                     JMP 0x005f2373
LAB_005f2371:
005F2371  33 F6                     XOR ESI,ESI
LAB_005f2373:
005F2373  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
005F2376  85 C0                     TEST EAX,EAX
005F2378  7C 16                     JL 0x005f2390
005F237A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F2380  50                        PUSH EAX
005F2381  E8 1A 68 0F 00            CALL 0x006e8ba0
005F2386  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005F2389  C7 46 18 FF FF FF FF      MOV dword ptr [ESI + 0x18],0xffffffff
LAB_005f2390:
005F2390  47                        INC EDI
005F2391  3B F9                     CMP EDI,ECX
005F2393  7C C7                     JL 0x005f235c
005F2395  5E                        POP ESI
LAB_005f2396:
005F2396  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
005F2399  50                        PUSH EAX
005F239A  E8 71 BD 0B 00            CALL 0x006ae110
005F239F  C7 43 3C 00 00 00 00      MOV dword ptr [EBX + 0x3c],0x0
LAB_005f23a6:
005F23A6  5F                        POP EDI
005F23A7  5B                        POP EBX
005F23A8  8B E5                     MOV ESP,EBP
005F23AA  5D                        POP EBP
005F23AB  C3                        RET
