-- This is a customization script. It is intended to be used to customize a scene in
-- various ways, mainly when simulation is not running. When simulation is running,
-- do not use customization scripts, but rather child scripts if possible

    function sysCall_init()
        -- do some initialization here
    end
    
    function sysCall_nonSimulation()
        -- is executed when simulation is not running
    end
    
    function sysCall_cleanup()
        -- do some clean-up here
    end
    
    -- You can define additional system calls here:
    --[[
    function sysCall_beforeSimulation()
    end
    
    function sysCall_actuation()
    end
    
    function sysCall_sensing()
    end
    
    function sysCall_suspend()
    end
    
    function sysCall_suspended()
    end
    
    function sysCall_resume()
    end
    
    function sysCall_afterSimulation()
    end
    
    function sysCall_beforeInstanceSwitch()
    end
    
    function sysCall_afterInstanceSwitch()
    end
    
    function sysCall_dynCallback(inData)
    end
    
    function sysCall_jointCallback(inData)
        return outData
    end
    
    function sysCall_contactCallback(inData)
        return outData
    end
    
    function sysCall_beforeCopy(inData)
        for key,value in pairs(inData.objectHandles) do
            print("Object with handle "..key.." will be copied")
        end
    end
    
    function sysCall_afterCopy(inData)
        for key,value in pairs(inData.objectHandles) do
            print("Object with handle "..key.." was copied")
        end
    end
    
    function sysCall_beforeDelete(inData)
        for key,value in pairs(inData.objectHandles) do
            print("Object with handle "..key.." will be deleted")
        end
        -- inData.allObjects indicates if all objects in the scene will be deleted
    end
    
    function sysCall_afterDelete(inData)
        for key,value in pairs(inData.objectHandles) do
            print("Object with handle "..key.." was deleted")
        end
        -- inData.allObjects indicates if all objects in the scene were deleted
    end
    --]]
    