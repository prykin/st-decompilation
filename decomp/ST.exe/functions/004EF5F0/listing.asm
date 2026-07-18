FUN_004ef5f0:
004EF5F0  55                        PUSH EBP
004EF5F1  8B EC                     MOV EBP,ESP
004EF5F3  51                        PUSH ECX
004EF5F4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EF5F7  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
004EF5FB  BA 08 00 00 00            MOV EDX,0x8
004EF600  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
004EF603  8B 08                     MOV ECX,dword ptr [EAX]
004EF605  49                        DEC ECX
004EF606  83 F9 03                  CMP ECX,0x3
004EF609  77 21                     JA 0x004ef62c
switchD_004ef60b::switchD:
004EF60B  FF 24 8D 78 F6 4E 00      JMP dword ptr [ECX*0x4 + 0x4ef678]
switchD_004ef60b::caseD_1:
004EF612  BA 08 00 00 00            MOV EDX,0x8
004EF617  EB 13                     JMP 0x004ef62c
switchD_004ef60b::caseD_2:
004EF619  BA 0A 00 00 00            MOV EDX,0xa
004EF61E  EB 0C                     JMP 0x004ef62c
switchD_004ef60b::caseD_3:
004EF620  BA 0C 00 00 00            MOV EDX,0xc
004EF625  EB 05                     JMP 0x004ef62c
switchD_004ef60b::caseD_4:
004EF627  BA 06 00 00 00            MOV EDX,0x6
switchD_004ef60b::default:
004EF62C  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004EF62F  83 F9 03                  CMP ECX,0x3
004EF632  77 36                     JA 0x004ef66a
switchD_004ef634::switchD:
004EF634  FF 24 8D 88 F6 4E 00      JMP dword ptr [ECX*0x4 + 0x4ef688]
switchD_004ef634::caseD_0:
004EF63B  C6 45 FC 00               MOV byte ptr [EBP + -0x4],0x0
004EF63F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EF642  25 FF 00 00 00            AND EAX,0xff
004EF647  03 C2                     ADD EAX,EDX
004EF649  8B E5                     MOV ESP,EBP
004EF64B  5D                        POP EBP
004EF64C  C3                        RET
switchD_004ef634::caseD_1:
004EF64D  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
004EF651  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EF654  25 FF 00 00 00            AND EAX,0xff
004EF659  03 C2                     ADD EAX,EDX
004EF65B  8B E5                     MOV ESP,EBP
004EF65D  5D                        POP EBP
004EF65E  C3                        RET
switchD_004ef634::caseD_3:
004EF65F  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004EF662  85 C9                     TEST ECX,ECX
004EF664  0F 95 C1                  SETNZ CL
004EF667  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
switchD_004ef634::default:
004EF66A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EF66D  25 FF 00 00 00            AND EAX,0xff
004EF672  03 C2                     ADD EAX,EDX
004EF674  8B E5                     MOV ESP,EBP
004EF676  5D                        POP EBP
004EF677  C3                        RET
