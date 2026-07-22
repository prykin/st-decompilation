CreateChooseMap:
005B2790  55                        PUSH EBP
005B2791  8B EC                     MOV EBP,ESP
005B2793  51                        PUSH ECX
005B2794  53                        PUSH EBX
005B2795  56                        PUSH ESI
005B2796  68 C4 20 00 00            PUSH 0x20c4
005B279B  E8 30 DD 0F 00            CALL 0x006b04d0
005B27A0  8B F0                     MOV ESI,EAX
005B27A2  33 DB                     XOR EBX,EBX
005B27A4  3B F3                     CMP ESI,EBX
005B27A6  0F 84 59 01 00 00         JZ 0x005b2905
005B27AC  57                        PUSH EDI
005B27AD  8B CE                     MOV ECX,ESI
005B27AF  E8 FC 37 13 00            CALL 0x006e5fb0
005B27B4  B9 08 00 00 00            MOV ECX,0x8
005B27B9  33 C0                     XOR EAX,EAX
005B27BB  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005B27BE  C7 06 18 C0 79 00         MOV dword ptr [ESI],0x79c018
005B27C4  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005B27C7  89 5E 5D                  MOV dword ptr [ESI + 0x5d],EBX
005B27CA  F3 AB                     STOSD.REP ES:EDI
005B27CC  B9 08 00 00 00            MOV ECX,0x8
005B27D1  8D 7E 3D                  LEA EDI,[ESI + 0x3d]
005B27D4  F3 AB                     STOSD.REP ES:EDI
005B27D6  89 1D 9C 87 80 00         MOV dword ptr [0x0080879c],EBX
005B27DC  8D BE 74 01 00 00         LEA EDI,[ESI + 0x174]
005B27E2  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005b27e9:
005B27E9  8D 8F 6F FF FF FF         LEA ECX,[EDI + 0xffffff6f]
005B27EF  E8 2C 30 16 00            CALL 0x00715820
005B27F4  8B CF                     MOV ECX,EDI
005B27F6  E8 25 30 16 00            CALL 0x00715820
005B27FB  8D 8F 91 00 00 00         LEA ECX,[EDI + 0x91]
005B2801  E8 1A 30 16 00            CALL 0x00715820
005B2806  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B2809  81 C7 FB 01 00 00         ADD EDI,0x1fb
005B280F  48                        DEC EAX
005B2810  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B2813  75 D4                     JNZ 0x005b27e9
005B2815  B9 0D 00 00 00            MOV ECX,0xd
005B281A  33 C0                     XOR EAX,EAX
005B281C  8D 7E 66                  LEA EDI,[ESI + 0x66]
005B281F  C7 06 08 C0 79 00         MOV dword ptr [ESI],0x79c008
005B2825  C6 46 65 02               MOV byte ptr [ESI + 0x65],0x2
005B2829  88 9E 9A 00 00 00         MOV byte ptr [ESI + 0x9a],BL
005B282F  F3 AB                     STOSD.REP ES:EDI
005B2831  8D 96 BC 00 00 00         LEA EDX,[ESI + 0xbc]
005B2837  C7 45 FC 0D 00 00 00      MOV dword ptr [EBP + -0x4],0xd
LAB_005b283e:
005B283E  B9 09 00 00 00            MOV ECX,0x9
005B2843  33 C0                     XOR EAX,EAX
005B2845  8B FA                     MOV EDI,EDX
005B2847  81 C2 FB 01 00 00         ADD EDX,0x1fb
005B284D  F3 AB                     STOSD.REP ES:EDI
005B284F  66 AB                     STOSW ES:EDI
005B2851  AA                        STOSB ES:EDI
005B2852  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B2855  48                        DEC EAX
005B2856  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B2859  75 E3                     JNZ 0x005b283e
005B285B  8D 8E 70 1A 00 00         LEA ECX,[ESI + 0x1a70]
005B2861  E8 BA 2F 16 00            CALL 0x00715820
005B2866  8D 8E 01 1B 00 00         LEA ECX,[ESI + 0x1b01]
005B286C  E8 AF 2F 16 00            CALL 0x00715820
005B2871  8D 8E 92 1B 00 00         LEA ECX,[ESI + 0x1b92]
005B2877  E8 A4 2F 16 00            CALL 0x00715820
005B287C  8D BE 23 1C 00 00         LEA EDI,[ESI + 0x1c23]
005B2882  B9 16 00 00 00            MOV ECX,0x16
005B2887  83 C8 FF                  OR EAX,0xffffffff
005B288A  C7 06 88 C0 79 00         MOV dword ptr [ESI],0x79c088
005B2890  C7 86 60 1A 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1a60],0x1
005B289A  89 9E 6C 1A 00 00         MOV dword ptr [ESI + 0x1a6c],EBX
005B28A0  F3 AB                     STOSD.REP ES:EDI
005B28A2  89 86 87 1C 00 00         MOV dword ptr [ESI + 0x1c87],EAX
005B28A8  89 9E 7B 1C 00 00         MOV dword ptr [ESI + 0x1c7b],EBX
005B28AE  89 9E 7F 1C 00 00         MOV dword ptr [ESI + 0x1c7f],EBX
005B28B4  89 9E 97 1C 00 00         MOV dword ptr [ESI + 0x1c97],EBX
005B28BA  89 9E 9B 1C 00 00         MOV dword ptr [ESI + 0x1c9b],EBX
005B28C0  89 9E 9F 1C 00 00         MOV dword ptr [ESI + 0x1c9f],EBX
005B28C6  89 9E 8F 1C 00 00         MOV dword ptr [ESI + 0x1c8f],EBX
005B28CC  89 9E 93 1C 00 00         MOV dword ptr [ESI + 0x1c93],EBX
005B28D2  89 9E C0 20 00 00         MOV dword ptr [ESI + 0x20c0],EBX
005B28D8  89 9E BC 20 00 00         MOV dword ptr [ESI + 0x20bc],EBX
005B28DE  89 9E B8 20 00 00         MOV dword ptr [ESI + 0x20b8],EBX
005B28E4  89 9E 64 1A 00 00         MOV dword ptr [ESI + 0x1a64],EBX
005B28EA  89 9E 68 1A 00 00         MOV dword ptr [ESI + 0x1a68],EBX
005B28F0  89 9E 83 1C 00 00         MOV dword ptr [ESI + 0x1c83],EBX
005B28F6  89 9E 8B 1C 00 00         MOV dword ptr [ESI + 0x1c8b],EBX
005B28FC  8B C6                     MOV EAX,ESI
005B28FE  5F                        POP EDI
005B28FF  5E                        POP ESI
005B2900  5B                        POP EBX
005B2901  8B E5                     MOV ESP,EBP
005B2903  5D                        POP EBP
005B2904  C3                        RET
LAB_005b2905:
005B2905  5E                        POP ESI
005B2906  33 C0                     XOR EAX,EAX
005B2908  5B                        POP EBX
005B2909  8B E5                     MOV ESP,EBP
005B290B  5D                        POP EBP
005B290C  C3                        RET
