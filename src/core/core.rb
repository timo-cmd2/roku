module Core
  class Core
    def initialize( debug_evaluator = false, debug_printer = false )
      @debug_evaluator = debug_evaluator
      @evaluator       = Evaluator.new( self, debug_evaluator )
      @debug_printer   = debug_printer
    end
    
    def self.version
      "0.0.1"
    end

    attr_reader :evaluator
    
    def loadInitFile( use_compiled = true )
    end
  end
end
